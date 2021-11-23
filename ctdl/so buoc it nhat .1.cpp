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

	putchar_unlocked('\n'); 
} 

main() {
    int T,N,i,j,max;
    int A[1005],dp[1005];
   re(T);
    while(T--)
    {
        re(N);
        dp[0] = 1;
        for(i=0;i<N;i++)
             re(A[i]);
        for(i=1;i<N;i++)
        {
            max = 1;
            for(j=0;j<i;j++)
            {
                if(A[i]>=A[j])
                {
                    if(max<dp[j]+1) max = dp[j]+1;
                }
            }
            dp[i] = max;
        }
        max = 0;
        for(i=0;i<N;i++)
            if(dp[i]>max) max = dp[i];
        wr(N-max);
    }

}