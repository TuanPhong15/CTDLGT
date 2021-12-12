//DSA03006
#include <bits/stdc++.h>


using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b = a;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i] && a[i] != b[n - i - 1])
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}