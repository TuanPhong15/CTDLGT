//DSA06007
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> b = a;
        sort(b.begin(), b.end());
        int d = 0, c = n - 1;
        while (d < n && b[d] == a[d])
            d++;
        while (c >= 0 && b[c] == a[c])
            c--;
        if (d < c)
            cout << d + 1 << ' ' << c + 1 << endl;
    }
}