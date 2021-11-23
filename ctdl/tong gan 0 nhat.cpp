#define MIN 100000000
#include<stdio.h>
#include<ctype.h>
#include<math.h>
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
int a[1000000];

void input(int a[],int n){
	for(int i=0; i<n; i++){
		re(a[i]);
	}
}

long long findSum(int a[], int n){
	long long minSum = MIN;
	long long temp;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(abs(0-(a[i]+a[j])) < minSum){
				minSum = abs(0-(a[i]+a[j]));
				temp = a[i] + a[j];
			}
		}	
	}
	return temp;
}

main(){
	int T, n;
	re(T);
	while(T--){
		
		re(n);
		input(a, n);
		wr(findSum(a, n));
	}
}