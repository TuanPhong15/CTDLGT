//DSA1006
#include <bits/stdc++.h>

using namespace std;
vector<int> vec;
int n;
vector<bool> tmp;
void in(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << vec[(int)(s[i] - '0')];
    }
    cout << ' ';
}
void create(int params, string num)
{
    if (params == n)
    {
        in(num);
        return;
    }
    for (int i = 0; i < n; i++)
        if (!tmp[i])
        {
            tmp[i] = 1;
            create(params + 1, num + (char)(i + '0'));
            tmp[i] = 0;
        }
}
void solve()
{
    vec.clear();
    tmp.clear();
    cin >> n;
    tmp.resize(n, 0);
    for (int i = n - 1; i >= 0; i--)
        vec.push_back(i + 1);
    create(0, "");
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}