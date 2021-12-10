//DSA020005
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<int> a(n);
    for (int i = 1; i <= n; i++)
    {
        a[i - 1] = i;
    }
    do
    {
        for (int x : a)
        {
            cout << s[x - 1];
        }
        cout << ' ';
    } while (next_permutation(a.begin(), a.end()));
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
}