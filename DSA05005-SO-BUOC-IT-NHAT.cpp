//DSA05005
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, res = 0;
        cin >> n;
        vector<int> F(n), a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            F[i] = 1;
            for (int j = 0; j < i; j++)
                if (a[j] <= a[i])
                    F[i] = max(F[i], F[j] + 1);
        }
        for (int i = 0; i < n; i++)
            res = max(res, F[i]);
        cout << n - res << endl;
    }
}