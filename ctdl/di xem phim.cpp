#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#include<stdio.h>
#include<ctype.h>
template <typename T>
void re(T& x)
{
    x = 0; T f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
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
		putchar('-'); 

	while (i >= 0) 
		putchar(snum[i--]); 

	putchar('\n'); 
} 
void khoitao(int b[],int n ){
	for (int i=1;i<=n;i++){
		b[i]=0;
	}
}



int tong(int a[],int b[],int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		if (b[i]){
			sum+=a[i];
		}
	}
	return sum;
}

void sinhnp(int a[],int b[],int n,int j,vi &ds){
	for (int i=0;i<=1;i++){
		b[j]=i;
		if (j==n) {
			ds.push_back(tong(a,b,n));
		}
		else sinhnp(a,b,n,j+1,ds);
	}
}

main(){
	int n,c;
	re(c);re(n);
	int a[n+1];
	int b[n+1];
	vi ds;
	for(int i=1;i<=n;i++){
		re(a[i]);
	}
	khoitao(b,n);
	sinhnp(a,b,n,1,ds);
	int res=ds[0];
	for(int i=0;i<ds.size();i++){
		if (ds[i]>res && ds[i]<=c){
			res=ds[i];
		}
	}
	wr(res);
}

 
