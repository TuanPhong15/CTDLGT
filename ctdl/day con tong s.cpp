
#include<stdio.h>
#include<ctype.h>
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

	putchar('\n'); 
} 




main(){
    int t, n,s,a;
    re(t);
    while(t--){
        re(n);re(s); int dp[s+1] ={0};
        for(int i = 1;i <= n;i++)
        {
        	re(a);
        	dp[a]=1;
        	  for(int j = s;j>=a;j--)
        	  if(dp[j-a]==1) dp[j]=1;
		}
          if(dp[s]==1) puts("YES");
          else puts("NO");
    }
} 