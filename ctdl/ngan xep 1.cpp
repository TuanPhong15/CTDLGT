#include<bits/stdc++.h>
using namespace std;

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
	putchar(' '); 
} 
main()
{



	string s; int n; stack<int> stk;
	while(cin >> s)
	{
		if(s == "push")
		{
			re(n);
			stk.push(n);
		}
		else if (s == "pop") stk.pop();
		else if (s == "show")
		{
			vector<int> a;
			if(stk.size()== 0 )
			{
				puts("empty") ;
				continue;
			}
			while(stk.size()>0)
			{
				a.emplace_back(stk.top());
			stk.pop();
			}
			reverse(a.begin(), a.end());
			for(int i = 0; i < a.size();i++)
			{
				wr(a[i]) ;
				stk.push(a[i]);
			}
			putchar('\n'); 
		}
		
	}
}
