
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

} 
void Output(int a[], int n, int k)
{
   if(count (a, a+n, 1) == k)
   {
     
	for (int i = 0; i < n; i++) {
		wr(a[i]);
	}
	putchar_unlocked('\n'); }
}

void Try(int n, int a[], int i, int k)
{
	if (i == n) {
		Output(a, n, k);
		return;
	}
	a[i] = 0;
	Try(n, a, i + 1, k);
	a[i] = 1;
	Try(n, a, i + 1, k);
}

int n,k, a[16];
main()
{
	int t; re(t);
	while(t--)
	{
		re(n);re(k);
	Try(n,a,0,k);
	}
	
}