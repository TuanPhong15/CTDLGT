//DSA06002

#include <bits/stdc++.h>
using namespace std;
bool compareInterval( pair<int, int> a,
                      pair<int, int> b)
{
    return (a.second < b.second);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<pair<int, int> > s;
        for (int i = 0; i < n; i++)
        {
            pair<int, int> x = make_pair(a[i], abs(a[i]-m));
            s.push_back(x);
        }
        stable_sort(s.begin(), s.end(), compareInterval);
        for (vector<pair<int, int> >::iterator it = s.begin(); it != s.end(); ++it)
        {
            cout <<it->first << " " ;
        }
        cout << endl;
    }
}