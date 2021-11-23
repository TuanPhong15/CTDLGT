#include <bits/stdc++.h>
using namespace std;
int n, a[100];
bool ok[100];
vector<string> check;

void res()
{
    int i, j;
    string s;
    for (int i = 1; i <= n; i++)
    {
        s += a[i] + '0';
    }
    check.push_back(s);
}
void Try(int i)
{
    for (int j = n; j >= 1; j--)
    {
        if (!ok[j])
        {
            a[i] = j;
            ok[j] = true;
            if (i == n)
                res();
            else
                Try(i + 1);
            ok[j] = false;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        Try(1);
        for (int i =0  ; i < check.size(); i++)
        {
            cout << check[i];
            if (i != (check.size()-1))
                cout << ",";
        }
                check.clear();

        cout << endl;
    }
}