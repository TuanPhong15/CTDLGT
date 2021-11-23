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
int min(int m, int b, int c ){

   if(m>b)
       m=b;
    if(m>c)
       m=c;
    return m;
}
main() {
    int T;        int m,n;
    re(T);
    while(T--){
        re(m);re(n);
        int mat[m][n];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                 re(mat[i][j]);
        int S[m][n];
        for(int i=0;i<m;i++)
              S[i][0]=mat[i][0];
        for(int j=0;j<n;j++)
              S[0][j]=mat[0][j];
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
            if(mat[i][j]==1)
                S[i][j]=min(S[i][j-1],S[i-1][j],S[i-1][j-1])+1;
               else
                 S[i][j]=0;
            }
        }
        int max=S[0][0];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(max<S[i][j])
                     max = S[i][j];
            }
        }
       wr(max);
      
    }
}