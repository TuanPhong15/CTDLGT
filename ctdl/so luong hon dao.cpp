//matrix 4
#include<stdio.h>
#include<ctype.h>
template <typename T> void re(T& x)
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
	if (n < 0) n *= -1, neg = 1; 
	char snum[20]; int i = 0; 
	do	{ snum[i++] = n % 10 + '0'; 	n /= 10; } 	while (n); 
	--i; 
	if (neg) putchar_unlocked('-'); 
	while (i >= 0)	putchar_unlocked(snum[i--]); 
	putchar_unlocked('\n'); 
} 


void remove(int A[][500],int i, int j,int n, int m)
{

    if(i <0||j<0)
    return ;
    if(i>=n||j>=m)
    return ;
    if(A[i][j]==0)
    return ;
    A[i][j]=0;
    remove(A,i-1,j-1,n,m);
    remove(A,i-1,j,n,m);
    remove(A,i-1,j+1,n,m);
    remove(A,i,j-1,n,m);
    remove(A,i,j+1,n,m);
    remove(A,i+1,j-1,n,m);
    remove(A,i+1,j,n,m);
    remove(A,i+1,j+1,n,m);
}
int solve(int A[][500], int &n, int &m)
{ 
  if(n==0)
  return 0;
  int dem =0;
  for(int i=0;i<n;i++)
  { for(int j=0;j<m;j++)
      { if(A[i][j]==1)
        { dem++;
        remove(A,i,j,n,m);
        }
      }
   }
   return dem;
}
main()
{

	int t, n, m; re(t);
	while (t--)
	{
	 re(n);re(m);
		int a[n][500];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			re(a[i][j]);
		wr( solve(a, n, m));
	}
} 
