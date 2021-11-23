#include <bits/stdc++.h>

using namespace std;
#define MAX_CITY 20

int c[MAX_CITY][MAX_CITY];

int Bool[100], n;
int x[100], s = 0, MIN = 10e7, cmin = 10e7;

vector<vector<int> > temp;
void Try(int i, vector<int> v1)
{
    if (s + cmin * (n - i + 1) >= MIN)
        return; 
    for (int j = 1; j <= n; j++)
    {
        if (Bool[j])
        {
            x[i] = j;
            v1.push_back(j);
            Bool[j] = 0;
            s += c[x[i - 1]][j];

            if (i == n)
            {
                if (s + c[x[n]][x[1]] < MIN)
                {
                    MIN = s + c[x[n]][x[1]];
                    temp.push_back(v1);
                }
            }
            else
                Try(i + 1, v1);
            s -= c[x[i - 1]][j];
            Bool[j] = 1;
            v1.pop_back();
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
            if (c[i][j] != 0)
                cmin = min(cmin, c[i][j]);
        }
    }
    memset(Bool, 1, sizeof(Bool));

    Bool[1] = 0;
    x[1] = 1;
    vector<int> v1;
    Try(2, v1);
    cout << "(1,";

    for (int j = 0; j < temp[temp.size() - 1].size(); j++)
        cout << temp[temp.size() - 1][j] << ",";
    cout << "1)" << endl;

    cout << MIN << endl;
}