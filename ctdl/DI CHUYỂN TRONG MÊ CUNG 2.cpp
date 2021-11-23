#include <bits/stdc++.h>
using namespace std;
#define MAX 10
template <typename T>
void re(T& x)
{
    x = 0; T f = 1;
    char ch = getchar_unlocked();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar_unlocked();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar_unlocked();
    x *= f;
}

vector <string> pat;
void paths(int m[MAX][MAX],int n,string l,int up,int right,vector <vector <int>> vis)
{
	if(m[up][right]==0)
	return;
    if(up<0 or right<0)
    return;
    if(up>n-1 or right >n-1)
    return;
    if(vis[up][right]==1)
    {
		return;}
    if(up==n-1&&right==n-1)
    {
        pat.push_back(l);
        return;
    }
    vis[up][right]=1;
    if(up>=1&&m[up-1][right]==1)
    paths(m,n,l+"U",up-1,right,vis);
    if(m[up+1][right]==1)
	paths(m,n,l+"D",up+1,right,vis);
	if(right>=1&&m[up][right-1]==1)
    paths(m,n,l+"L",up,right-1,vis);
    if(m[up][right+1]==1)
    paths(m,n,l+"R",up,right+1,vis);
}
vector<string> printPath(int m[MAX][MAX], int n) {
    pat.clear();
    vector <vector <int>> vis(MAX,vector <int> (MAX,0));
    paths(m,n,"",0,0,vis);
    sort(pat.begin(),pat.end());
    if(pat.size()==0)
    pat.push_back("-1");
    return pat;
}
main() {
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t;
    re(t);
    while (t--) {
        int n;
        re(n);

        int m[MAX][MAX];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                re(m[i][j]);
            }
        }

        vector<string> result = printPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }

}