//DSA05002
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        string s;
        cin >> n >> s;
        s = ' ' + s;
        n++;
        int F[n][n] = {};
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (s[i] == s[j] && i != j)
                    F[i][j] = F[i - 1][j - 1] + 1;
                else
                    F[i][j] = max(F[i - 1][j], F[i][j - 1]);
            }
        }

        cout << F[n - 1][n - 1] << endl;
    }
}