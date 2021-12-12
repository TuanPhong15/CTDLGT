//DSA04010
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n] = {};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int tmp = 0, tong = 0;
        for (int i : a)
        {
            tong += i;
            if (tong < 0)
                tong = 0;
            tmp = max(tmp, tong);
        }
        cout << tmp << endl;
    };
}