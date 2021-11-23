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

	putchar(' '); 
} 

#define MAX 1000 
int n, a[MAX];
void input(){
 int i;
  re(n);
 for (i = 1; i <= n; i++)
  re(a[i]);
}
void output(){
 int i; 
 for (i = 1; i <= n; i++)
  wr(a[i]);
}
void solve(){
 int i, j;
 i = n;
 while (i > 0 && a[i] == n -  i)
  i--;
 if (i > 0) {
  a[i] = a[i] + 1;
  for (j = i + 1; j <= n; j++)
   a[j] = a[i] + j - i;
 }
 else 
 {
 	for (i = 1; i <= n; i++)
  a[i]=i;
 }
}

main(){
	int t; 
	re(t);
	while(t--)
	{
input();
 solve();
 output();
 putchar('\n'); 
	}

}