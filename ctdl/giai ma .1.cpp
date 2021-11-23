#include<stdio.h>
#include<ctype.h>
#define int long long
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
int numDecodings(char * s){
    int ways0=1, ways1=1, ways2 = 1, one, two;
    
    if ((s == NULL) || (*s == '0'))
        return 0;
    
    s++; ways0=1, ways1=1, ways2 = 1;
    
    while(*s != '\0') {
        
        ways0 = ways1;
        ways1 = ways2;
        ways2 = 0;
        
        if ((*s == '0') && (*(s-1) > '2'))
            return 0;
        
        one = *s - '0';
        two = 10*(*(s-1) - '0') + one;
        if ((one >= 1) && (one <= 9))
            ways2 += ways1;
        
        if ((two >= 10) && (two <=26))
            ways2 += ways0;
        //printf("[%d %d %d]\n", ways0, ways1, ways2);
        s++;
    }
    return ways2;
}
main()
{
	int t; re(t);
	char s[101];
	while(t--)
	{
		scanf("%s",s);
		wr(numDecodings(s));
	}
}
