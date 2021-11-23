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
	putchar_unlocked(' '); 
} 
main() {
	int T;
	re(T);
	for(int w=0;w<T;w++)
	{
	    int M,N;
	    scanf("%d %d",&M,&N);
	    int A[M],B[N];
	    for(int i=0;i<M;i++)
	    {
	        re(A[i]);
	    }
	    for(int i=0;i<N;i++)
	    {
	        re(B[i]);
	    }
	    int C[N+M-1];
	    for(int i=0;i<N+M-1;i++)
	    {
	        C[i]=0;
	    }
	    for(int i=0;i<M;i++)
	    {
	        for(int j=0;j<N;j++)
	        {
	            C[i+j]+=A[i]*B[j];
	        }
	    }
	    for(int i=0;i<M+N-1;i++)
	    {
	        wr(C[i]);
	    }
	    putchar_unlocked('\n'); 
	}
}