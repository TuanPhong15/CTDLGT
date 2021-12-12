//
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
        cin.ignore();
        bool dd[10] = {};
        string s;
        getline(cin, s);
        for (char c : s)
        {
            if (c >= '0' && c <= '9')
                dd[c - '0'] = 1;
        }
        for (int i = 0; i < 10; i++)
            if (dd[i])
                cout << i << ' ';
        cout << endl;
    }
}