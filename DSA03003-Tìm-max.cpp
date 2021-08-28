//DSA03003
#include <bits/stdc++.h>
using namespace std;
long long mod = 1000000007;
int main()
{
    int n, m, T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long sum = 0;
        for (int i = 1; i < n; i++)
        {
            sum += ((i%mod) * (a[i]%mod) % mod);
        }
        cout << sum << endl;
    }
}