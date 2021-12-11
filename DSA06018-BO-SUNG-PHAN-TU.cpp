//DSA06018
#include <bits/stdc++.h>

using namespace std;

void check()
{
    int n;
    cin >> n;
    vector<int> a;
    map<int, int> ts;
    for (int i = 0; i < n; i++)
    {
        int so;
        cin >> so;
        if (ts[so] == 0)
            a.push_back(so);
        ts[so]++;
    }
    sort(a.begin(), a.end());
    cout << (a.back() - a[0] + 1) - (int)a.size() << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        check();
}