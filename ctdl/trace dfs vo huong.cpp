#include<bits/stdc++.h>
using namespace std;
template <typename T> void re(T& x)
{
    x = 0; T f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
    x *= f;
}

template<typename T> void wr(T n) 
{ 
	bool neg = 0; 
	if (n < 0) n *= -1, neg = 1; 
	char snum[20]; int i = 0; 
	do	{ snum[i++] = n % 10 + '0'; 	n /= 10; } 	while (n); 
	--i; 
	if (neg) putchar('-'); 
	while (i >= 0)	putchar(snum[i--]); 
	putchar(' '); 
} 

vector<int> ke[1001];
bool ok [ 1001];
int truoc[1001];
void DFS(int u , int v)
{
	if(ok[v])return;
	ok[u] = 1;
	for(int i = 0; i < ke[u].size();i++)
	   if(!ok[ke[u][i]])
	   {
	   	truoc[ke[u][i]] = u;
	   	DFS(ke[u][i],v);
	   }
}
void trace(int u, int v)
{
	if(!ok[v])
	{
		wr(-1);
		return;
	}
	vector<int> a;
	while(u!=v)
	{
		a.emplace_back(u);
		u = truoc[u];
	}
	a.emplace_back(v);
	reverse(a.begin(),a.end());
	for(int i = 0; i <a.size();i++ ) wr(a[i]);
}
main()
{
	int t, a,b,bd,kt; re(t);
	while(t--)
	{
		for(int i = 0; i < 1001;i++)
		ke[i].clear();
		memset(ok,0, sizeof ok);
		memset(truoc,0, sizeof truoc);
		
		re(a);re(b);re(bd);re(kt);
		for(int i = 0; i < b; i++)
		{
			int u,v;
			re(u);re(v);
			ke[u].emplace_back(v);
			ke[v].emplace_back(u);
		}
		DFS(bd,kt);
		trace(kt,bd);
		putchar('\n'); 
	}
}
