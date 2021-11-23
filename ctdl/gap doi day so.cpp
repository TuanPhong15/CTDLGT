#include<stdio.h>
#include<ctype.h>
#include<math.h>
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
main (){ int t , n; long long k; re(t); while(t--){ re(n);re(k); long long len =pow(2,n)/2; while(1){ if(n==1){ putchar_unlocked('1'); break; } if(len==k){ wr(n); break; } if(k>len){ k=len-(k-len); } n--; len/=2; } putchar_unlocked('\n'); } }

