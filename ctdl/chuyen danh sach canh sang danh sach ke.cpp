#include<iostream> 
#include<vector> 
#include<algorithm> 

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


} 
 main()
{
int t; re(t); while(t--)
{
	int v,e; re(v);re(e); std::vector <int> ke[v+5];
for(int i= 0;i<e;i++)
{
	int a,b; re(a);re(b); ke[b] .push_back(a);ke[a].push_back(b); 
}

for(int i=1;i<=v;i++)
sort(ke[i].begin(), ke[i].end());

for(int i=1;i<= v;i++)
{
	wr(i);	putchar(':'); 
	for(int j=0; j<ke[i].size(); j++)
	{
		putchar(' '); wr(ke[i][j]);
	}
	 	putchar('\n'); 
}

}
}
