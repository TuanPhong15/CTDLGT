//DSA05008
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int a[n] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int F[k] = {};
        F[k] = 0, F[0] = 1;
        for (int i = 0; i < n; i++)
            for (int s = k; s >= a[i]; s--)
                if (F[s] == 0 && (F[s - a[i]] == 1))
                    F[s] = 1;

        if (F[k])
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}