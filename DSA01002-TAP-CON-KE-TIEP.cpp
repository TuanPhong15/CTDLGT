//DSA1002
#include <bits/stdc++.h>


using namespace std;
vector<int> solve(vector<int> a, int n)
{
    int early = n + 1, pos = a.size() - 1;
    while (a[pos] == early - 1)
    {
        early = a[pos];
        pos--;
    }
    if (pos < 0)
        for (int i = 0; i < a.size(); i++)

            a[i] = i + 1;
    else
    {
        bool dd[n + 1] = {};
        a[pos] = a[pos] + 1;
        for (int i = 0; i < pos + 1; i++)
            dd[a[pos]] = 1;
        for (int i = pos + 1; i < a.size(); i++)
            for (int j = a[i - 1] + 1; j < n + 1; j++)

                if (dd[j] == 0)
                {
                    a[i] = j;
                    dd[j] = 1;
                    break;
                }
    }
    return a;
}
int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> f(k);
        for (int i = 0; i < k; i++)
            cin >> f[i];
        f = solve(f, n);
        for (int i = 0; i < k; i++)
            cout << f[i] << ' ';
        cout << endl;
    }
}