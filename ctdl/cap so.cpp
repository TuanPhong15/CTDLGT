#include <cstdlib>
#include <cstdio>
#include<ctype.h>
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
struct val{
	int first;
	int second;
};
int mycomp(const void *a,const void *b)
{
    return (*(struct val *)a).first-(*(struct val *)b).first;
}
int maxChainLen(struct val a[],int n)
{

    int dp[n];
    qsort(a,n,sizeof(struct val),mycomp);
    dp[0]=1;
    int max=1;
    for(int i=1;i<n;i++)
    {
        dp[i]=1;
        for(int j=0;j<i;j++)
        {
            if(a[j].second<a[i].first&&dp[j]+1>dp[i])
                dp[i]=dp[j]+1;
        }
        if(dp[i]>max)
        max=dp[i];
    }
    return max;
}

main() {

	int t,n;val p[100];
	re(t);
	while(t--)
	{
		re(n);
		for(int i=0;i<n;i++)
		{
			re(	p[i].first);re(p[i].second);
	}
		
		wr(maxChainLen(p,n));
	}

}
 
