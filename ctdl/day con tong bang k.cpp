#include<bits/stdc++.h>
using namespace std;

template <typename T>
void re(T& x)
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
		putchar_unlocked('-'); 

	while (i >= 0) 
		putchar_unlocked(snum[i--]); 


} 

int n,k;
int a[100],v[100];
vector< vector<int> > res;
void init()
{
    res.clear();
    re(n); re(k);
    for(int i=1;i<=n;i++)
         re(v[i]);
    sort(v+1,v+n+1);
}
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
         a[i]=j;
         if(i==n)
         {
             int s=0;                 
             for(int l=1;l<=n;l++)
                 if(a[l]) s+= v[l];
             if(s==k){
             	  vector<int> x;
                 for( int l=1;l<=n;l++)
                 if(a[l]) 
				 x.push_back(v[l]);
                 res.push_back(x);
			 }

               
             }
                
        else Try(i+1);
    }}

main()
{
    int t;
    re(t)
;    while(t--)
    {
    init();
    Try(1);
        if(res.size()==0) {wr(-1); 	putchar_unlocked('\n'); 
		}
        else
        {
            sort(res.begin(), res.end());
            for(int i=0;i<res.size();i++)	
            {
                putchar_unlocked('[');
                for(int j=0;j<res[i].size()-1;j++)
                {
                	wr(res[i][j] ); putchar_unlocked(' '); 
				}
                    
                wr(res[i][res[i].size()-1]); putchar_unlocked(']'); putchar_unlocked(' '); 
            } 
           putchar_unlocked('\n'); 
}}}