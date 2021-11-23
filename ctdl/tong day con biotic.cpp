#include<stdio.h>
#include<ctype.h>
#include<limits.h>
template <typename T> void re(T& x)
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
	if (n < 0) n *= -1, neg = 1; 
	char snum[20]; int i = 0; 
	do	{ snum[i++] = n % 10 + '0'; 	n /= 10; } 	while (n); 
	--i; 
	if (neg) putchar_unlocked('-'); 
	while (i >= 0)	putchar_unlocked(snum[i--]); 
	putchar_unlocked('\n'); 
} 
int max(int a, int b)
{
	return (a>b) ? a: b;
}
int dp[101];int dp2[101], dp1[101];
int solve(int a[], int n)
{
    int kq = INT_MIN;
    for (int i = 0; i < n; i++) {
        dp1[i] = a[i];
        dp2[i] = a[i];
    }
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[i] > a[j] && dp2[i] < dp2[j] + a[i])
                dp2[i] = dp2[j] + a[i];
    for (int i = n - 2; i >= 0; i--)
        for (int j = n - 1; j > i; j--)
            if (a[i] > a[j] && dp1[i] < dp1[j] + a[i])
                dp1[i] = dp1[j] + a[i];
    for (int i = 0; i < n; i++)
        kq = max(kq, (dp1[i] + dp2[i] - a[i]));
    return kq;
}

main() {
 int T,n;
 re(T);
 int a[100];
 while(T--){
     re(n);
     for(int i=0;i<n;i++)
         re(a[i]);
     ;
     wr(solve(a,n));
 }

}