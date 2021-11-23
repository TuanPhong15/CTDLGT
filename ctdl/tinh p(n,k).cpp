#include <stdio.h> 
#include<ctype.h>
#define int long long
template<typename T>
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
	if (n < 0) n *= -1, neg = 1; 
	char snum[20]; int i = 0; 
	do	{ snum[i++] = n % 10 + '0'; 	n /= 10; } 	while (n); 
	--i; 
	if (neg) putchar('-'); 
	while (i >= 0)	putchar(snum[i--]); 
	putchar('\n'); 
} 

int PermutationCoeff(int n, int k)
{
    int P = 1;
    for (int i = 0; i < k; i++)
        P =(P%1000000007*((n-i)%1000000007)) %1000000007 ;
    return P;
}
  

 
main()
{
    int n = 10, k = 2; int t;
    re(t);
    while(t--)
    {
    	re(n); re(k);
    	if(k>n) wr(0); else
    	wr(PermutationCoeff(n, k) );
	}

}