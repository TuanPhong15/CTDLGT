#include<iostream>
#include<algorithm>
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
int maxSumIS(int *a, int n){

	int dp[n];

	for(int i=0;i<n;i++) dp[i] = a[i];

	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i] > a[j])
				dp[i] = max(dp[i], dp[j] + a[i]);
		}
	}
	return *max_element(dp, dp+n);
}
main() 
{
   	
   	int t, n;
   re(t);
    while (t--)
    {
        
        re(n);
        int a[n];
        for(int i = 0; i < n; i++)
        	re(a[i]);
	    wr(maxSumIS(a, n)) ;
	     
    }
}