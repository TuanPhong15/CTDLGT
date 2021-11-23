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

	char snum[2]; 
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
int tknoisuy(int a[], int n, int x)
{
  int left = 0;
  int right = n-1;
  while (left <= right && x >= a[left] && x <= a[right])
  {
    double val1 = (double) (x - a[left]) / (a[right]-a[left]);
    int val2 = (right-left);
    int pos = left + val1*val2;
 
    if (a[pos] == x)
      return 1;
 
    if (a[pos] < x)
      left = pos + 1;
    else
      right = pos - 1;
  }
  return -1;
}
main()
{
	int t,n,x; re(t);
	while(t--)
	{
		re(n); re(x);
		int a[n];
		for(int i = 0; i< n; i++)
		re(a[i]);
		 wr(tknoisuy(a,n,x));
	
		
	}
}
