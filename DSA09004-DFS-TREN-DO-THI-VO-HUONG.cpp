//DSA09004
#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> res;
vector<int> vec;
vector<bool> tmp;
void do_thi(int u)
{
    cout << u << ' ';
    for (int i = 0; i < res[u].size(); i++)
    {
        int v = res[u][i];
        if (tmp[v] == 0)
        {
            tmp[v] = 1;
            do_thi(v);
        }
    }
}
void check()
{
      res.clear();
    tmp.clear();
    int E, V, u, v;
    cin >> V >> E >> u;
  
    res.resize(V + 1);
    tmp.resize(V + 1, 0);
    for (int i = 0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        res[a].push_back(b);
        res[b].push_back(a);
    }
    tmp[u] = 1;
    do_thi(u);
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
        check();
}