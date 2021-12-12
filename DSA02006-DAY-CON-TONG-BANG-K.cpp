//DSA02026
#include <bits/stdc++.h>

using namespace std;
int n, k;
vector<int> a;
bool check;

void Try(int vt, int sum, string s)
{
    if (sum > k)
        return;
    if (vt == n)
    {
        if (sum == k)
        {
            bool ok = 0;
            cout << '[';
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '1')
                {
                    if (ok)
                        cout << ' ';
                    cout << a[i];
                    ok = 1;
                }
                else
                    continue;
            }
            cout << "] ";
            check = 1;
        }
        return;
    }
    for (char i = '1'; i >= '0'; i--)
    {
        if (i == '0')
            Try(vt + 1, sum, s + i);
        else
            Try(vt + 1, sum + a[vt], s + i);
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        a.resize(n);
        check = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        Try(0, 0, "");
        if (check == 0)
            cout << -1;
        cout << endl;
    }
}