#include<stdio.h>
#include<ctype.h>
#define int long long
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

int solve(int a[], int n){
	int maxa=0;
	int i,j,tam;
	for(i=0;i<n;i++){
		tam=1;
		for(j=i+1;j<n;j++){
			if(a[j]>=a[i]){
				tam++;
			}
			else break;
		}
		
		for(j=i-1;j>=0;j--){
			if(a[j]>=a[i]){
				tam++;
			}
			else break;
		}
		if(maxa<(a[i]*tam)){
			maxa=a[i]*tam;
		}
	}
	return maxa;
}

main(){
	int t,n,a[100005],i;
	re(t);
	while(t--){
		re(n);
		for(i=0;i<n;i++){
			re(a[i]);
		}
		wr(solve(a,n));
	}

}