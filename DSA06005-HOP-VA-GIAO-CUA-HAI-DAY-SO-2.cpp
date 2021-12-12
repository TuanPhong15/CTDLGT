//DSA06005
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(1e5 + 1, 0), b(1e5 + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int so;
            cin >> so;
            a[so]++;
        }
        for (int i = 0; i < n; i++)

        {
        }
        for (int i = 0; i < m; i++)

        {
            int so;
            cin >> so;
            b[so]++;
        }
        for (int i = 0; i < 1e5 + 1; i++)

        {
            int sl = max(a[i], b[i]);
            while (sl--)
                cout << i << ' ';
        }
        cout << endl;
        for (int i = 0; i < 1e5 + 1; i++)
        {
            int sl = min(a[i], b[i]);
            while (sl--)
                cout << i << ' ';
        }
        cout << endl;
    };
}