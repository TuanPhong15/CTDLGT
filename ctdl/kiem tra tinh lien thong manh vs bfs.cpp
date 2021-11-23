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
	putchar('\n'); 
} 
vector<int>ke [1005];
bool ok[1005];
int truoc[1005];
void bfs(int u)
{
	queue<int> q;
	q.push(u);
	while(q.size()>0)
	{
		int top = q.front(); q.pop();
		ok[top] = 1;
		for(int i = 0; i < ke[top].size();i++)
		{
			if(!ok[ke[top][i]])
			{
				ok[ke[top][i]] = true;
				q.push(ke[top][i]);
			}
		}
		
	}
}
main()
{
	int t,a,b; re(t);
	while(t--)
	{
		for(int i = 0; i< 1001; i ++) ke[i].clear();
		memset(ok,0,sizeof(ok));
		re(a);re(b);
		for(int i = 0; i < b; i++)
		{
			int u,v;
			re(u); re(v);
			ke[u].emplace_back(v);
		}
		int res = 0;
		for(int i = 1; i <=a; i++)
		if(!ok[i])
		{
			res ++;
			bfs(i);
		}
		if(res>=2) puts("NO");
		else puts("YES");
	}
}