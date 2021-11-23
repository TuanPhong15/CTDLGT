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

	putchar_unlocked(' '); 
} 
void indapan(int a[], int n) 
{ 
	for (int i = 0; i < n; i++) { 
		wr(a[i]); 
	} 
	 putchar_unlocked('\n'); 
} 
void KiemTraMangDoiXung(int a[], int n)
{
	for(int i = 0; i < n/2; i++)
	{
		if(a[i] != a[n - i - 1])
		{
			return ;
		}
	}
	indapan(a,n);
}

void chuoi(int n, int a[], int i) 
{ 
	if (i == n) { 
		KiemTraMangDoiXung(a, n); 
		return; 
	} 
	a[i] = 0; 
	chuoi(n, a, i + 1); 
	a[i] = 1; 
	chuoi(n, a, i + 1); 
} 


main()
{
	int n; 
	re(n);int a[n];
	chuoi(n, a, 0);
}