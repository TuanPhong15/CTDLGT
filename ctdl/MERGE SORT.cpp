#include<algorithm>
#include<iostream>
using namespace std;
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

	putchar_unlocked(' '); 
} 
main()
{
	int t,n; re(t);
	while(t--)
	{
		re(n);int a[n];
		for(int i = 0; i < n; i++)
			re(a[i]);
		sort(a,a+n);
		for(int i = 0; i < n; i++)
			wr(a[i]);
		putchar_unlocked('\n'); 
	}
	
}