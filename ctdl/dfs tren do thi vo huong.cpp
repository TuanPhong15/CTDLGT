 #include<iostream> 
#include<vector> 

using namespace std;

template <typename T>
void re(T& x)
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

	if (n < 0) 
		n *= -1, neg = 1; 

	char snum[20]; 
	int i = 0; 
	do
	{ 
		snum[i++] = n % 10 + '0'; 
		n /= 10; 
	} 

	while (n); 
	--i; 

	if (neg) 
		putchar('-'); 

	while (i >= 0) 
		putchar(snum[i--]); 

	putchar(' '); 
} 



bool ok[1003];
void dfs(int u,vector<int> *ke)
{
	ok[u] = 1;
	wr (u);
	for(int i = 0; i<ke[u].size(); i++)
	if(!ok[ke[u][i]])
	dfs(ke[u][i],ke);
}
main()
{
	
	int t,u,v, a,b,nguon; re(t);
	while(t--)
	{
		vector<int> ke[1003];
		memset(ok,0,sizeof(ok));
		re(a);re(b); re(nguon);
for(int i=0;i<b;i++)
{
	re(u);re(v);
	ke[u].emplace_back(v);
	ke[v].emplace_back(u);
}
dfs(nguon,ke);
putchar('\n');
	}

}


