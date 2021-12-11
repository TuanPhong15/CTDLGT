//DSA06006
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
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            int so;
            cin >> so;
            if (so == 0)
                a++;
            else if (so == 1)
                b++;
            else
                c++;
        }
        for (int i = 0; i < a; i++)
            cout << 0 << ' ';
        for (int i = 0; i < b; i++)
            cout << 1 << ' ';
        for (int i = 0; i < c; i++)
            cout << 2 << ' ';

        cout << endl;
    }
}