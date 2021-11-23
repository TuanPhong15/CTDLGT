#include<stdio.h>
#include<ctype.h>
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

	putchar('\n'); 
} 



 main()

{
	int a[ ]={1000,500,200,160,50,20,10,5,2,1}, t; re(t);; 
	while(t--)
	{
		long long k,res=0; re(k); 
		for(int i =0;i<10;i++)
		{
			res += k/a[i]; k%=a[i];
		}

wr(res);
	}

}


