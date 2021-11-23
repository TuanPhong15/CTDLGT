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

}
int n, C, a[105], Max[105][25005];

int xemphim(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=C; j++){
            if(j >= a[i] && Max[i-1][j-a[i]] + a[i] > Max[i-1][j])
                Max[i][j] = Max[i-1][j-a[i]] + a[i];
            else 
                Max[i][j] = Max[i-1][j];
        }
    }
    return Max[n][C];
}

main(){
    re(C);re(n);
    for(int i=1; i<=n; i++) re(a[i]); // kh?i lu?ng
    wr(xemphim()) ;
}