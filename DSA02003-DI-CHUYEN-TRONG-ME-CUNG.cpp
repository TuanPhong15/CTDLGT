#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> vec;
vector<string> res;
int n;
void check(pair<int, int> st)
{
    queue<pair<pair<int, int>, string>> q;
    q.push(make_pair(st, ""));
    while (!q.empty())
    {
        pair<int, int> u = q.front().first;
        string way = q.front().second;
        q.pop();
        if (u.first == n - 1 && u.second == n - 1)
        {
            res.push_back(way);
            continue;
        }
        if (u.first + 1 < n && vec[u.first + 1][u.second] == 1)
        {
            q.push(make_pair(make_pair(u.first + 1, u.second), way + 'D'));
        }
        if (u.second + 1 < n && vec[u.first][u.second + 1] == 1)
        {
            q.push(make_pair(make_pair(u.first, u.second + 1), way + 'R'));
        }
    }
}
void func()
{
    cin >> n;
    vec.clear();
    res.clear();
    vec.resize(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> vec[i][j];
    if (vec[0][0] == 0)
    {
        cout << -1 << endl;
        return;
    }
    check(make_pair(0, 0));
    if (res.size() == 0)
        cout << -1 << endl;
    else
    {
        sort(res.begin(), res.end());
        for (string s : res)
            cout << s << ' ';
        cout << endl;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        func();
}