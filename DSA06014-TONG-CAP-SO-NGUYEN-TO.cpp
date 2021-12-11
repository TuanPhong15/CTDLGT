//DSA06014
#include <bits/stdc++.h>

using namespace std;
vector<int> F;
bool arr[(int)1e6 + 1] = {};
void solve()
{
    int n;
    cin >> n;
    for (int i : F)
    {
        vector<int>::iterator it = lower_bound(F.begin(), F.end(), n - i);
        if (it == F.end())
            continue;
        if (*it == n - i)
        {
            cout << i << ' ' << *it << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    for (long long i = 2; i <= 1e6; i++)
    {
        if (arr[i] == 0)
        {
            for (long long j = i * i; j <= 1e6; j += i)
                arr[j] = 1;
            F.push_back(i);
        }
    }
    int T;
    cin >> T;
    while (T--)
        solve();
}