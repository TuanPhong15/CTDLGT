#include<stdio.h>
#include<ctype.h>

template<typename T>
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
const long long INF = 1e9 + 7;
int n;
int a[1002];
int k;
int f[1002][60];
main () {

	int t;re(t);
	while(t--)
	{
   re(n);re(k);
    for(int i = 1; i <= n ; i++) re(a[i]) , a[i]%=k ;

    for(int j = 1 ; j< k ; j++) f[0][j] = -INF;
    
    for(int i = 1 ; i <= n ; i++) for(int j = 0 ; j < k ; j++){
        f[i][j] = (f[i-1][j] > f[i-1][(j-a[i]+k)%k] + 1) ? f[i-1][j]:  f[i-1][(j-a[i]+k)%k] + 1 ;

    }
    wr(f[n][0]);
	 } 

}






