#include <bits/stdc++.h>

using namespace std;
#define MAX_CITY 15

int C[MAX_CITY][MAX_CITY];
int n, cost = 0;
int Ketqua = INT_MAX;
bool Mark[MAX_CITY] = {0};
int Path[MAX_CITY];
vector<int> temp;
void Try(int i)
{
    if (i == n)
    {
        if (cost + C[Path[i - 1]][Path[0]] < Ketqua)
        {
            Ketqua = cost + C[Path[i - 1]][Path[0]];
                                temp.push_back(i);

        }
    }
    else
    {
        for (int j = 0; j < n; j++)
        {
            if (Mark[j] == 0 && (cost + C[Path[i - 1]][j] < Ketqua))
            {
                Path[i] = j;
                Mark[j] = 1;
                cost += C[Path[i - 1]][j];
                Try(i + 1);
                Mark[j] = 0;
                cost -= C[Path[i - 1]][j];
            }
        }
    }
}

int main()
{
    cin >> n;
    if (n > 15)
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> C[i][j];
        }
    Path[0] = 0;
    Mark[0] = 1;
    Try(1);
    for (int j = 0; j < temp.size() - 1; j++)
        cout << temp[j] << ",";
    cout << "1)" << endl;
    cout << Ketqua << endl;
}