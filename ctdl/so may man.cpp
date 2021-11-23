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


} 

 

main(){
int t,n; re(t);
while(t--)
{
		re(n);
	int count4=0;
	int count7=0;
	bool flag=true;
	while(1){
		if (n%7==0){
			count7+=n/7;
			break;
		}
		if (n>=4){
			count4++;
			n-=4;
		}
		if (n<4){
			if (n!=0) flag=false;
			break;
		}
	}
	if (flag){
		for(int i=0;i<count4;i++) wr(4);
		for(int i=0;i<count7;i++) wr(7);
	}else wr(-1);
		putchar('\n'); 
}


} 