  #include<stdio.h>
#include<ctype.h>
#include<string.h>
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


int cti(char ch)
{
    return (ch - '0');
}
  int dp[15];
int solvbe(char *so)
{

    dp[0] = cti(so[0]);
    int res = dp[0];

    for (int i=1; i<strlen(so); i++)
    {
        int numi = cti(so[i]);

        dp[i] = (i+1) * numi +10 * dp[i-1];

        res += dp[i];
    }
 
    return res;
}
main(){
		int t=0;
		char s[15];
		re(t);
		while(t--)
		{
			scanf("%s",s);
		wr(solvbe(s) );
		}
 
}



