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

	putchar_unlocked('\n'); 
} 
void nhapmang(int a[], int n)
{
for(int i=0;i<n;i++)
		re(a[i]);
}
long long TONGMAX(int a[], int n) 
{ 
	long long max = -1000001, ketthuc = 0; 

	for (int i = 0; i < n; i++) 
	{ 
		ketthuc = ketthuc + a[i]; 
		if (max < ketthuc) 
			max = ketthuc; 

		if (ketthuc < 0) 
			ketthuc = 0; 
	} 
	return max; 
} 
main(){
	int t,n,a[100]; re(t);
	while (t--)
	{
	re(n);
	nhapmang(a, n);
	wr(TONGMAX(a,n));
	}
}
