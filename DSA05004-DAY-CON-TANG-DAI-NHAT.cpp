//DSA05004
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, res = 0;
    cin >> n;
    vector<int> f(n);
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        f[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
                f[i] = max(f[i], f[j] + 1);
        }
    }
    for (int i = 0; i < f.size(); i++)
    {
        res = max(res, f[i]);
    }

    cout << res;
}