#include<stdio.h>
#include<ctype.h>
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

int min(int x, int y, int z)
{
   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;
}


int a[1001][1001],n,m;
int solve() {

	for (int i=1 ; i<n ; i++){
		a[i][0] += a[i-1][0];
	}
	for (int j=1 ; j<m ; j++){
		a[0][j] += a[0][j-1];
	}
	for (int i=1 ; i<n ; i++) {
		for (int j=1 ; j<m ; j++) {
			a[i][j] += min(a[i-1][j-1], a[i-1][j], a[i][j-1]);
		}
	}
	return a[n-1][m-1];
}
main()
{
   int t; re(t);
   while(t--)
   {
   	re(n); re(m);
   	for(int i = 0; i < n; i++)
   	for(int j = 0; j < m; j++)
   	re(a[i][j]);
   	 wr(solve())  ;
   }
  
}
 