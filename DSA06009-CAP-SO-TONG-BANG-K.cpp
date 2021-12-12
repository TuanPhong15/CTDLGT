//DSA06009
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, res = 0;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            pair<vector<int>::iterator, vector<int>::iterator> it = equal_range(a.begin(), a.end(), k - a[i]);
            res += it.second - it.first;
            if (k - a[i] == a[i])
                res -= 1;
        }
        cout << res / 2 << endl;
    }
}