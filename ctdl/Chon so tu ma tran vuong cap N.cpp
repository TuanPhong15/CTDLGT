#include<bits/stdc++.h>

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
int res,n,k;
int a[30][30];
int x[30];
bool ok[30];
std::vector<int> Res;
void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(!ok[j])
        {
            x[i]=j;
            ok[j]=true;
            if(i==n)
            {    res = 0;
                for(int l=1;l<=n;l++)
                     res += a[l][x[l]];
                 if (res == k)
                {
                for(int l=1;l<=n;l++)
                Res.push_back(x[l]) ;
                }
            }
            else Try(i+1);
            ok[j]=false;
        }
    }
}
main()
{
	re(n); re(k);

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
        re(a[i][j]);
}

Try(1);

wr(Res.size()/n) ;
for(int i=0;i<Res.size();i++)
{
    if(i%n==0) putchar('\n'); 
    wr(Res[i]);putchar(' '); 
}
	
}