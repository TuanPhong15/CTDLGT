//DSA6004
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T ;
    while (T--)
    {
        int n, m;
        int check;
        cin >> n >> m;

        vector<int> v1;
        vector<int> v2;

        for (int i = 0; i < n; i++)
        {
            cin >> check;
            v1.push_back(check);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> check;
            v2.push_back(check);
        }
        sort(begin(v1), end(v1));
        sort(begin(v2), end(v2));

        vector<int> hop;
        set_union(begin(v1), end(v1), begin(v2), end(v2),
                  back_inserter(hop));
        for (int i = 0; i < hop.size(); i++)
            cout << hop[i] << " ";
        cout << endl;

        vector<int> giao;
        set_intersection(begin(v1), end(v1), begin(v2), end(v2),
                         back_inserter(giao));
        for (int i = 0; i < giao.size(); i++)
            cout << giao[i] << ' ';
        cout << endl;
    }
}