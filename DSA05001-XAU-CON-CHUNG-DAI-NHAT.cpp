//DSA05001
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        s1 = '.' + s1;
        s2 = ',' + s2;
        int n = s1.length();
        int m = s2.length();
        vector<vector<int>> F(n + 1, vector<int>(m + 1));
        for (int i = 0; i < n; i++)
            F[i][0] = 0;
        for (int i = 0; i < m; i++)
            F[0][i] = 0;
        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
                if (s1[i] == s2[j])
                    F[i][j] = F[i - 1][j - 1] + 1;
                else
                    F[i][j] = max(F[i - 1][j], F[i][j - 1]);
        cout << F[n - 1][m - 1] << endl;
    }
}