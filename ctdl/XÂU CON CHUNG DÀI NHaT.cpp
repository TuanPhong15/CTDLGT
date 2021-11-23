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
main()
{
	int m,n,K; int a[m],b[n];
	scanf( "%d %d  %d", &m, &n, &K) ;
for (int i = 0; i < m; i++) scanf("%d", &a[i]);
for (int i = 0; i < n; i++) scanf("%d", &b[i]);
 
int ans = 0;
for (int i = 0; i < m; i++)
{
     int mmax = 0;
     for (int j = 0; j < n; j++)
     {
           int premax = mmax;
           if (abs(a[i] - b[j]) <= K) mmax = max(LCS[j], mmax);
           if (a[i] = b[j]) LCS[j] = max(LCS[j], premax + 1);
           ans = max(ans, LCS[j]);
     {
}
printf("%d", ans);
}

