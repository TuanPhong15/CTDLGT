#include<stdio.h>
#include<ctype.h>
#include<string.h>
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


 inline void swap(char & a,char & b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}





main(){

	int test, a, leng;
	char s[100];
	re(test);
	while(test--) {
		re(a); scanf("%s",s);
		leng = strlen(s);
		int vt = 0;
		for(int i = leng-2; i >= 0; i--) {
			if(s[i] < s[i+1]) {
				vt = i;
				break;
			}
		}
		if(vt == 0) {
			wr(a);putchar(' ');  puts("BIGGEST");
			continue;
		} else {
			int temp;
			int i = leng - 1;
			while(i >= vt && s[i] <= s[vt]) {
				i--;
			}
			temp = i;
			swap(s[temp], s[vt]);
			wr(a);putchar(' ');
			for(int i = 0; i <= vt; i++) putchar(s[i]);
			for(int i = leng-1; i >= vt+1; i--) putchar(s[i]);
			putchar('\n');
		}
	}

}