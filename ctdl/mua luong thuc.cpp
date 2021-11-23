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
int t, n,s,m;

main()
{
	re(t);
	while(t--)
	{
		re(n);re(s);re(m);
	    if(s*m > (s-s/7)*n) wr(-1);
		else 
		{
			for(int i = 1; i <= s-s/7; i++)
			if(n*i>=s*m)
			{
				wr(i); break;
			}
		}	putchar_unlocked('\n'); 
	}
}