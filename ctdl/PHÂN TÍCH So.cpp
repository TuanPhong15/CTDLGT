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


} 

#define K  10

int a[K];
int m,n;
int s[K][K];

void print(int k, int i, int n) {
  int j;
  a[i]=k; n-=k;

  if (n<0) return;
  if (n==0) {
  	putchar_unlocked('(');
    for(j=0;j<=i;j++)
    {
    	if(j == i) wr(a[j]);
    	else
    	{
    		wr(a[j]);	putchar_unlocked(' '); 
		}
    	
	}
      
   	putchar_unlocked(')');	putchar_unlocked(' ');
    return;
  }

  for(j=k;j>=1;j--)
    print( j,i+1, n);
}

main() {
  int t;
  int i,j;

  re(t);

  while(t--) {
    re(n);

    for(i=n;i>=1;i--)
      print(i,0,n);
    puts("");
  }
}
