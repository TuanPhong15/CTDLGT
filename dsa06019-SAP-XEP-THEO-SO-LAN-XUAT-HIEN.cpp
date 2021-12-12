//DSA06019
#include <bits/stdc++.h>

using namespace std;
vector<int> ts;

bool so_sanh(int a, int b)
{
    return (ts[a] > ts[b] || (ts[a] == ts[b] && a < b));
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a;
        ts.clear();
        ts.resize(1e5 + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int so;
            cin >> so;
            if (ts[so] == 0)
                a.push_back(so);
            ts[so]++;
        }
        sort(a.begin(), a.end(), so_sanh);
        for (int x : a)
        {
            for (int i = 0; i < ts[x]; i++)
                cout << x << ' ';
        }
        cout << endl;
    };
}