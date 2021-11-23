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

	putchar(' '); 
} 
int a[10],n,ok=1,x[10],b,sdmax,sd,c[10];

int gtsd()
{
	sd=0;
	for(int i=0;i<n;i++)
		sd=sd+c[i]*x[i];
	return sd;

}
void in()
{
		wr(gtsd());putchar('\n');
	for(int i=0;i<n;i++)
		wr(x[i]);

}

void init(void)
{
	re(n);
	re(b);
	for(int i=0;i<n;i++)
		{
		re(c[i]);
		x[i]=0;
		}
			for(int i=0;i<n;i++)
		{
		re(a[i]);}
}
int test_tluong()
{
	int t=0;
	for(int i=0;i<n;i++)
		t=t+a[i]*x[i];
	if(t<=b) return (1);
	return 0;
}
void next_bit_string()
{
	int i=n-1;
	while(i>=0 && x[i])
		{x[i]=0;
		i--;}
	if(i>=0) x[i]=1;
	else ok=0;
}
void max()
{
	init();
	sdmax=gtsd();
	while(ok)
		{
		next_bit_string();
		if(test_tluong() && sdmax<gtsd()) sdmax=gtsd();		}
}
main()
{
	
	max();
	ok=1;
	for(int i=0;i<n;i++)
		x[i]=0;
	while(ok)
		{
		if(test_tluong() && gtsd()==sdmax) in();
		next_bit_string();
		}
}