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

int n,k,s,res;
int a[11];
void Try(int i)

{


     for(int j=a[i-1]+1;j<=n-k+i;j++)

     {
a[i] = j;
         if (i == k) 

         { 

             int sum=0;

             for(int l=1;l<=k;l++)
             sum += a[l];
             if(sum == s)
             res ++;

     }

         else Try(i+1);

 }
}

main()

{


     while(1)

     {

         re(n);re(k);re(s);
         res=0;

         for(int i=0;i<=0;i++)
             a[i]=0;

         if(n ==0 && k==0 && s==0) break;
         Try(1);

        wr(res);

 }

}

