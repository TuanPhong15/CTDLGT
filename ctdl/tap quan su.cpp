#include<stdio.h>
#include<ctype.h>
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
main()
{
int t; re(t);
while(t--)
{
    int n, k;
    re(n); re(k);
    int a[k+5];
    int d[100]={0};

    for(int i=1;i<=k;i++)
    {
         re(a[i]);
        d[a[i]]=1;
    }

    int i=k;
    while(i>0 && a[i] == n-k+i) i--;
    if(i<=0) wr(k);
    else
    {
         a[i]+=1;
         for(int j=i+1;j<=k;j++)
             a[j] = a[j-1] + 1;
         for(int j=1;j<=k;j++)
             d[a[j]]=0;
         int res=0;
         for(int j=1;j<=40;j++)
             if(d[j]) res++;
         wr(res);
    }
	putchar_unlocked('\n'); 
}	
}
