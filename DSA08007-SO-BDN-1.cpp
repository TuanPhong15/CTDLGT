//
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string n;
        cin >> n;
        bool check = 0;
        unsigned long long dem = 0;
        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] == '0')
                continue;
            if (n[i] == '1')
            {
                dem += 1 << n.length() - i - 1;
                continue;
            }
            for (int j = i; j < n.length(); j++)
            {
                dem += 1 << n.length() - j - 1;
            }
            break;
        }

        cout << dem << endl;
    };
}