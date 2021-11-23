 #include<stdio.h>
#include<ctype.h>
#include<string.h>
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
int longestPalindrome(char* s) {
       
        int ans_s=0;int ans_leng=0;
        int s_leng = strlen(s);
        for(int i=0;i<s_leng;++i)
        {
            int j=i;
            int h=i;
            for(; j+1<strlen(s) && s[j+1]==s[i];++j)++i;
            
            while(h-1>=0 && j+1<strlen(s) && s[j+1]==s[h-1])
            {
                ++j;
                --h;
            }
            
            if(j-h+1>ans_leng)
            {
                ans_leng = j-h+1;
                ans_s = h;
                s_leng = strlen(s)-ans_leng/2;
            }
        }
        
        return  ans_leng;
    }
    main()
    {
    	int t; re(t);
    	char a[1001];
    	while(t--)
    	{
    		scanf("%s",a);
    		wr(longestPalindrome(a));
		}
		
	}