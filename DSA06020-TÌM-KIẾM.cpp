//DSA06020
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
        int a[n];
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
        }
        int *point;
        point = find(a, a + n, m);
        if (point != a + n)
        {
            cout << 1<< endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}