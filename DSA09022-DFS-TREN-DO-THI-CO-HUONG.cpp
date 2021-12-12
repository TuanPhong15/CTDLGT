//DSA09022
#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> x;
vector<int> trace;
vector<bool> dd;
void solve_dfs(int u)
{
    cout << u << ' ';
    ;
    for (int i = 0; i < x[u].size(); i++)
    {

        int v = x[u][i];
        if (dd[v] == 0)
        {
            dd[v] = 1;
            solve_dfs(v);
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int E, V, u, v;
        cin >> V >> E >> u;
        x.clear();
        dd.clear();
        x.resize(V + 1);
        dd.resize(V + 1, 0);
        for (int i = 0; i < E; i++)

        {
            int a, b;
            cin >> a >> b;
            x[a].push_back(b);
        }
        dd[u] = 1;
        solve_dfs(u);
        cout << endl;
    }
}