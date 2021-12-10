//DSA4001
#include <bits/stdc++.h>

using namespace std;
long long mod = 1e9 + 7;

long long luy_thua(long long a, long long b)
{
    long long res = 1;
    for (long long i = b; i; i = i >> 1)
    {
        if (i & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
    }
    return res;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long a, b;
        cin >> a >> b;
        cout << luy_thua(a, b) << endl;
    }
}