#include <bits/stdc++.h>

using namespace std;
 int chia = 1e9 + 7;
void solve()
{
}
int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<long long> F(n + 1), sum(n + 1);
        for (int i = 0; i < min(k, n); i++)
            F[i] = 1;
        sum[0] = 1;
        for (int i = 1; i < n; i++)

        {
            if (i <= k)
                F[i] = (F[i] + sum[i - 1]) % chia;
            else
            {
                long long tmp = (sum[i - 1] - sum[i - k - 1]) % chia;
                if (tmp < 0)
                    tmp += chia;
                F[i] = (F[i] + tmp) % chia;
            }
            sum[i] = (sum[i - 1] + F[i]) % chia;
        }
        cout << F[n - 1] << endl;
    }
}