//DSA06001
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int i = 0, j = n - 1;
        while (i < j)
        {
            cout << a[j--] << " " << a[i++] << " ";
        }
        if (n % 2 != 0)
        {
            cout << a[i];
        }

        cout << endl;
    }
}