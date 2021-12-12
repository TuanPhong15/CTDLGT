//DSA02012
#include <bits/stdc++.h>

using namespace std;
int res, n, m;
void ma_Tran(int u, int v)
{
    if (u >= n || u < 0 || v < 0 || v >= m)
        return;
    if (u == n - 1 && v == m - 1)
    {
        res++;
        return;
    }
    ma_Tran(u + 1, v);
    ma_Tran(u, v + 1);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        res = 0;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        ma_Tran(0, 0);
        cout << res << endl;
    }
}