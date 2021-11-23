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
main()
{
	int t; re(t);
	long long tu, mau;
	while(t--)
	{
		re(tu); re(mau);
		long long res;
		while(true)
		{
			if(mau%tu == 0)
			{
				wr(1);putchar_unlocked('/');wr(mau/tu);putchar_unlocked('\n');
				break;
			}
			else
			{
				res = mau/tu+1;
				wr(1);putchar_unlocked('/');wr(res); putchar_unlocked(' ');  putchar_unlocked('+');putchar_unlocked(' ');
				tu = tu*res-mau;
				mau=mau*res;
			}
		}
	}
}