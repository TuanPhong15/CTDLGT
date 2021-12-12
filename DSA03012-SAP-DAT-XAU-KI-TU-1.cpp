//DSA03012
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        int lon_nhat = 0;
        vector<int> dd(300, 0);
        cin >> s;
        for (char i : s)
        {
            dd[i]++;
            lon_nhat = max(lon_nhat, dd[i]);
        }
        if (lon_nhat > (s.length() + 1) / 2)
            cout << -1;
        else
            cout << 1;
        cout << endl;
    }
}