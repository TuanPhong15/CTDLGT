#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;

template <typename T>
void re(T& x)
{
    x = 0; T f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
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
		putchar('-'); 

	while (i >= 0) 
		putchar(snum[i--]); 

	putchar(' '); 
} 
void xapxep(int a[], int n, int k)
{

    stable_sort(a, a + n, [k](int a, int b) 
    {
        if (abs(a - k) < abs(b - k))
            return true;
        else
            return false;
    }
	);
}
 
main()
{
     int t,n,k;
    re(t);
    while(t--){
        re(n);re(k);
        int a[n];
        for(int i = 0; i < n; i++){
            re(a[i]);
        }
        xapxep(a, n, k);
        for(int i = 0;i < n; i++){
            wr( a[i] );
}
	putchar('\n'); 
}}
