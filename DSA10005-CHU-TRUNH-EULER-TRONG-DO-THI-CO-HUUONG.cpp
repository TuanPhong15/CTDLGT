//DSA10005
#include<bits/stdc++.h>

using namespace std;
int V, E;
vector<pair<int,int> > x;
void khoi_tao()
{
	x.clear();
	x.resize(V+1);
}

void check()
{
	 cin >> V >> E;
        khoi_tao();
        for (int i = 0; i < E; i++)
        {
            int a, b;
            cin >> a >> b;
            x[a].second++;
            x[b].first++;
        }
        for (int i = 1; i <= V; i++)
            if (x[i].first != x[i].second)
            {
                cout << 0 << endl;
                return;
            }
        cout << 1 << endl;
}

int main()
{
	int T;
	cin >> T;
	while (T--) check();
}