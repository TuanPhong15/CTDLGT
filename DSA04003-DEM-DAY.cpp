//DSA04003
#include <bits/stdc++.h>

using namespace std;
long long mod = 123456789;
long long mu(long long b)
{
    long long res = 1, a = 2;
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
        long long n;
        cin >> n;
        n--;
        cout << mu(n) << endl;
    }
}