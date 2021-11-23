#include <iostream>
#include<algorithm>
#define int long long 
using namespace std;
template <typename T>
void read(T& x)
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

main() {

	int t, n,m,f,s;
	read(t);
	while(t--)
	{ 
read(n);read(m);
int A[n],B[m];
for(int i = 0; i<n; i++)
read(A[i]);
for(int i = 0; i<m; i++)
read(B[i]);
 f = *max_element(A,A+n);
s = *min_element(B,B+m);
wr(f*s);
}}
