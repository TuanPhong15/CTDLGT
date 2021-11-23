#include<stdio.h>
#include<ctype.h>
#include<string.h>
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

 

 

 
int n,k;
int a[202];
int f[40004];
 
 
void init(){
	memset(f,0,sizeof(f));
	re(n); re(k);
	for(int i=1;i<=n;i++){
		re(a[i]) ;
	}
}
 
void process(){
	f[0] = 1;
	for(int i=1;i<=n;i++){
		for(int t = k ; t >= a[i] ; t--){
			if (f[t-a[i]] == 1) f[t] = 1;
		}		
	}
	
	if (f[k] == 1)
		puts( "YES") ;
		else puts( "NO") ;
	
}
 
main(){
int t; re(t);
while(t--)
{
		init();
	process();
}

} 
