//DSA09002
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        string s;
        int j = 0;
        getline(cin, s);
        while (j < s.length())
        {
            int so = 0;
            while (j < s.length() && s[j] == ' ')
                j++;
            while (j < s.length() && s[j] != ' ')
            {
                so = so * 10 + (s[j] - '0');
                j++;
            }
            a[i].push_back(so);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        sort(a[i].begin(), a[i].end());
        for (int tmp : a[i])
        {
            if (tmp > i)
                cout << i << ' ' << tmp << endl;
        }
    }
}