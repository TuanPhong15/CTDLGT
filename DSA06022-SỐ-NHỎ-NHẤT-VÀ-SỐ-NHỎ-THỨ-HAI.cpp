//DSA06022
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, m;
    cin >> T;
    bool check;
    while (T--)
    {
        check = false;
        cin >> n;
        int a[n];
        int first ,second;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            check = false;
        }
        else
        {
            sort(a, a + n);
             first = a[0], second = INT_MAX;

            for (int i = 1; i < n; i++)
            {
                if (a[i]<second && a[i]!=first)
                {
                    second=a[i];
                    check = true;
                    break;
                }
            }
        }

        if (check)
        {
            cout << first << " " << second << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}