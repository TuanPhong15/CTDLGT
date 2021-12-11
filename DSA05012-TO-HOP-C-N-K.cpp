//DSA05012
#include <bits/stdc++.h>


using namespace std;
long long mod = 1e9 + 7;
long long tap[1001][1001] = {};
void check()
{
    tap[0][0] = 1;
    for (int i = 1; i < 1001; i++)
    {
        tap[i][0] = 1;
        for (int j = 1; j < 1001; j++)
            tap[i][j] = (tap[i - 1][j - 1] % mod + tap[i - 1][j] % mod) % mod;
    }
}

int main()
{
    check();
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        cout << tap[n][k] << endl;
    }
}