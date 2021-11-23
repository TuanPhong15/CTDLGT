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
 
const long long mod = 1e9+7;


 long Pow(long long a, long long b){
    if(b == 1) return a%mod;
    if(b == 0) return 1;
    long long tmp = Pow(a, b/2);
    if(b%2 == 0) return (tmp*tmp)%mod;
    return ((tmp*tmp)%mod*a)%mod;
}
 
long long invert(long long n){
    long long m = 0;
    while(n>0){
        m = m*10 + n%10;
        n/=10;
    }
    return m;
}
 

main(){
  
    int t;long long n; re(t);
    while(t--){
        re(n);
        wr(Pow(n, invert(n))) ;

}}