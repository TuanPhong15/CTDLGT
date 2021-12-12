//DSA05006
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, res = 0;
        cin >> n;
        vector<int> f(n);
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)

        {
            f[i] = a[i];
            for (int j = 0; j < i; j++)

                if (a[j] < a[i])
                    f[i] = max(f[i], f[j] + a[i]);
        }
        for (int i = 0; i < f.size(); i++)

            res = max(res, f[i]);
        cout << res << endl;
    }
}