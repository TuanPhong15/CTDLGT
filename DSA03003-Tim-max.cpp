//DSA 3003
#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
void solve()
{
    int n;
    long long res = 0;
    cin >> n;
    long long a[n] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        res = (res + (a[i] * i) % mod) % mod;
    cout << res << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}