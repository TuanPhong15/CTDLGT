//DSA05026
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v, n;
    cin >> v >> n;
    int x[n + 1] = {}, F[n + 1][v + 1] = {};
    for (int i = 1; i < n + 1; i++)
        cin >> x[i];
    for (int i = 0; i < n + 1; i++)
        F[i][0] = 0;
    for (int i = 0; i < v + 1; i++)

        F[0][i] = 0;
    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < v + 1 + 1; j++)

        {
            if (j < x[i])
                F[i][j] = F[i - 1][j];
            else
                F[i][j] = max(F[i - 1][j], F[i - 1][j - x[i]] + x[i]);
        }
    cout << F[n][v] << endl;
}