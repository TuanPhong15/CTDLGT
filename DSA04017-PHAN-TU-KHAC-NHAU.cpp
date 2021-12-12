//DSA04017
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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }
        int d = 0;
        for (; d < n - 1; d++)
            if (a[d] != b[d])
                break;
        cout << d + 1 << endl;
    }
}