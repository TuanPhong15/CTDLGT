#include <iostream>
#include <algorithm>
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

	putchar_unlocked('\n'); 
} 



main()
{
	int t,n; re(t);
	long long tong;
	while(t--)
	{
		re(n);
		tong = 0;
		long long a[n],b[n];
		for(auto &x : a) re(x);
		for(auto &y : b) re(y);
        sort(a,a+n,greater<long long>());
        sort(b,b+n);
		for(int i = 0; i < n; i++)
		{
			tong += a[i]*b[i];
		}
		
		wr(tong);
	}
}
