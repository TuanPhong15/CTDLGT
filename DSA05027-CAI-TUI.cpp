//DSA05027
#include <bits/stdc++.h>

using namespace std;
struct vat
{
    int kl, gt;
};

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int v, n;
        cin >> n >> v;
        vat x[n + 1] = {};
        int F[n + 1][v + 1] = {};
        for (int i = 1; i < n + 1; i++)
            cin >> x[i].kl;
        for (int i = 1; i < n + 1; i++)
            cin >> x[i].gt;
        for (int i = 0; i < n + 1; i++)
            F[i][0] = 0;
        for (int i = 0; i < v + 1; i++)
            F[0][i] = 0;
        for (int i = 1; i < n + 1; i++)
            for (int j = 1; j < v + 1; j++)
            {
                if (j < x[i].kl)
                    F[i][j] = F[i - 1][j];
                else
                    F[i][j] = max(F[i - 1][j], F[i - 1][j - x[i].kl] + x[i].gt);
            }
        cout << F[n][v] << endl;
    }
}