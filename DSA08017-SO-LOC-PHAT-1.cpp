//DSA08017
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int lim;
        cin >> lim;
        for (int n = lim; n > 0; n--)
        {
            int a = 1;
            for (int i = 0; i < n; i++)
            {
                a <<= 1;
            }

            for (int i = 0; i < a; i++)
            {
                int thu = a >> 1;
                for (int j = 0; j < n; j++)
                {
                    if (i & thu)
                        cout << 6;
                    else
                        cout << 8;
                    thu >>= 1;
                }
                cout << ' ';
            }
        }
        cout << endl;
    }
}