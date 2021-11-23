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
inline void swap(int & a,int & b)
{
int temp = a;
a = b; b= temp;
}
main(){
	int n,t;
	int x[10];
	re(t);
	while(t--){
		re(n);
	for(int i=1; i<=n; i++){
		x[i]=n-i+1;
		wr(x[i]);
	} 
	putchar_unlocked(' '); 
	 
	for(int i=n; i>1; i--){
		if(x[i]<x[i-1]){
			int j=i-1;
			int k=i;
			int max=x[k];
			for(int h=k; h<=n; h++){
				if(x[h]>max && x[h]<x[j]){
					max=x[h];
					k=h; 
				} 
			} 
			
			swap(x[j],x[k]);
			 
			int l=n; 
			for(int h=i; h<=l; h++){
				swap(x[h],x[l]); 
				l--; 
			}  
			for(int h=1; h<=n; h++){
				wr(x[h]); 
			} 
			
			i=n+1;
			
	putchar_unlocked(' '); 
		} 
	} 
	putchar_unlocked('\n'); 
	} 

}