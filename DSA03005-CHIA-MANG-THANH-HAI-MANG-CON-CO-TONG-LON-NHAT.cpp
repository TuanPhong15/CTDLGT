//DSA03005
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        long long res = 0, res2 = 0;
        cin >> n >> k;
        int a[n] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            res += a[i];
        }

        sort(a, a + n);
        k = min(k, n - k);
        for (int i = 0; i < k; i++)
            res2 += a[i];
        long long res1 = res - res2;
        cout << abs(res1 - res2) << endl;
    }
}