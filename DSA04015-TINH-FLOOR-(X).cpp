//DSA04015
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int con = upper_bound(a.begin(), a.end(), x) - a.begin();
        con--;
        if (con < 0 || a[con] > x)
            cout << -1;
        else
            cout << con + 1;
        cout << endl;
    }
}