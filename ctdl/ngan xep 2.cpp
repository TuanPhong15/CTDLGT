#include<bits/stdc++.h>
using namespace std;

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
main()
{

int t; re(t);

	string s; int n; stack<int> stk;
	while(t--)
	{
		cin >> s; 
		if(s == "PUSH")
		{
			re(n);
			stk.push(n);
		}
		else if (s == "POP"&& stk.size() > 0) stk.pop();
		else if (s == "PRINT")
		{
			if(stk.size()== 0 )
				puts("NONE") ;
	        else wr(stk.top());
		
			 
		}
		
	}
}
