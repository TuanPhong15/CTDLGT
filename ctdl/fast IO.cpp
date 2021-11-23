#include<stdio.h>
#include<ctype.h>
template <typename T> void re(T& x)
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
	if (n < 0) n *= -1, neg = 1; 
	char snum[20]; int i = 0; 
	do	{ snum[i++] = n % 10 + '0'; 	n /= 10; } 	while (n); 
	--i; 
	if (neg) putchar('-'); 
	while (i >= 0)	putchar(snum[i--]); 
	putchar('\n'); 
} 

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

template <typename TP>inline void read(TP& ret) {
    ret = NEG = 0 ; while (CH=getchar() , CH<'!') ;
    if (CH == '-') NEG = true , CH = getchar() ;
    while (ret = ret*10+CH-'0' , CH=getchar() , CH>'!') ;
    if (NEG) ret = -ret ;
}
template <typename TP>inline void readc(TP& ret) {
    while (ret=getchar() , ret<'!') ;
    while (CH=getchar() , CH>'!') ;
}
template <typename TP>inline void reads(TP *ret) {
    ret[0]=0;while (CH=getchar() , CH<'!') ;
    while (ret[++ret[0]]=CH,CH=getchar(),CH>'!') ;
    ret[ret[0]+1]=0;
}

