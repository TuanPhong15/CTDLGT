
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


  bool h[11],c[11],nguoc[22],xuoi[22];
  int n,res;
  int a[11];
  int va1[10][10];

  void init()
 {
      for(int i=1;i<=8;i++)
     {
          for(int j=1;j<=8;j++)
          re(va1[i][j]);
      }
      n=8;
      for(int i=0;i<11;i++)
          h[i]=c[i] = false;
      for(int i=0;i<22;i++)
          nguoc[i]=xuoi[i] = false;
      res=0;
 }

int max(int a, int b)
{
	if(a>b)  return a ; return b;
}

void Try(int i)
{
     for(int j=1;j<=n;j++)
{

         if(!h[j] && !c[j] && !nguoc[i+j-1] && !xuoi[i-j+n])
         {
         	
             a[i] = j;h[j] = c[j] = nguoc[i+j-1] = xuoi[i-j+n] = true;
             if(i==n)
             {
                 int ans=0;
                 for(int l=1;l<=8;l++)
ans += va1[l][a[l]];
                 res = max(res,ans);
             }
             else Try(i+1);
             h[j] = c[j] = nguoc[i+j-1] = xuoi[i-j+n] = false;
         }}}
        main()
{
	int t; re(t);
	while(t--)
	{
		init();
		Try(1);
		wr(res);
	}
}