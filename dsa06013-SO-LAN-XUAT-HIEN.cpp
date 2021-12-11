//dsa06013
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, dem = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int so;
            cin >> so;
            if (so == k)
                dem++;
        }
        if (dem == 0)
            cout << -1;
        else
            cout << dem;
        cout << endl;
    }
}