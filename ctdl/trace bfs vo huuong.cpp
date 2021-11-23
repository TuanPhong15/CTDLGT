#include<bits/stdc++.h>
using namespace std;
template <typename T> void re(T& x)
{
    x = 0; T f = 1;
    char ch = getchar_unlocked();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar_unlocked();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar_unlocked();
    x *= f;
}

template<typename T> void wr(T n) 
{ 
	bool neg = 0; 
	if (n < 0) n *= -1, neg = 1; 
	char snum[20]; int i = 0; 
	do	{ snum[i++] = n % 10 + '0'; 	n /= 10; } 	while (n); 
	--i; 
	if (neg) putchar_unlocked('-'); 
	while (i >= 0)	putchar_unlocked(snum[i--]); 
	putchar_unlocked(' '); 
} 

vector<int> ke[1001];
bool ok [ 1001];
int truoc[1001];
void bfs(int u , int v)
{
	queue<int> q;
	q.push(u);
	while(q.size()>0)
	{
		int top = q.front(); q.pop();
		ok[top] = 1;
		if(top == v) return;
			for(int i = 0; i < ke[top].size();i++)
	   if(!ok[ke[top][i]])
	   {
	   	ok[ke[top][i]] = 1;
	   	truoc[ke[top][i]] = top;
	   	q.push(ke[top][i]);
	   }
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
		bfs(bd,kt);
		trace(kt,bd);
		putchar_unlocked('\n'); 
	}
}
