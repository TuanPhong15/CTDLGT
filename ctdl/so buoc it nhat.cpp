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
int lis(int *arr,int n){
	int dp[n],i,j,max=1;
	for(i=0;i<n;i++)
	dp[i]=1;
	
	for(i=1;i<n;i++)
	for(j=i-1;j>=0;j--){
		if(arr[j]<=arr[i]&&dp[j]+1>dp[i])
		dp[i]=dp[j]+1;
	}
	
	for(i=0;i<n;i++)
	if(dp[i]>max)
	max=dp[i];
	
	return max;
}


main(){
	int t,n,arr[1001],i;
	re(t);
	while(t--){
		re(n);
		for(i=0;i<n;i++)
		re(arr[i]);
		
		wr(n-lis(arr,n));
	}

}