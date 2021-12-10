//DSA04002
#include <bits/stdc++.h>

using namespace std;
long long mod = 1e9 + 7;

long long nhan(long long n)
{
    long long res = 0;
    while (n > 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
long long luy_thua(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long res = luy_thua(a, b / 2);
    if (b % 2 == 0)
        return res % mod * res % mod;
    return a * (res % mod * res % mod) % mod;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        cout << luy_thua(n, nhan(n)) << endl;
    }
}