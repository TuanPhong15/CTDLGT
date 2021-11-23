#include<stdio.h>
#include<ctype.h>
#include<string.h>

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
 
unsigned long long int lookup[101][5001];
const long long mod = 1e9+7;
unsigned long long int countRec(int n, int sum)
{
    
    if (n == 0)
    return sum == 0;

    if (lookup[n][sum] != -1)
    return lookup[n][sum];

    unsigned long long int ans = 0;

    for (int i=0; i<10; i++)
    if (sum-i >= 0)
        ans = (ans%mod+countRec(n-1, sum-i)%mod)%mod;
 
    return lookup[n][sum] = ans;
}

unsigned long long int solve(int n, int sum)
{
   
    memset(lookup, -1, sizeof lookup);
 
 
    unsigned long long int ans = 0;
 
   
    for (int i = 1; i <= 9; i++)
    if (sum-i >= 0)
        ans =(ans%mod+ countRec(n-1, sum-i)%mod)%mod;
    return ans;
}
 

main() { 
    int n , sum, t;re(t); 
	while(t--)
    {
    	    re(n);re(sum);
    wr(solve(n, sum)); 
	}

} 