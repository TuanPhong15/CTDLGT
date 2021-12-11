//dsa08005
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
        for (int i = 1; i <= n; i++)
        {
            int so = i;
            string res = "";
            while (so > 0)
            {
                if (so % 2)
                    res = '1' + res;
                else
                    res = '0' + res;
                so /= 2;
            }
            cout << res << ' ';
        }
        cout << endl;
    }
}