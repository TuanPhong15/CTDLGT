#include<iostream>
#include<stack>
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
main()
{
	int t; re(t);
	while(t--)
	{
		int s,d;
		re(s); re(d);
		std::stack<int> stk;
		while(s>0)
		{
			d--;
			if(s>9)
			{
				stk.push(9);
				s-=9;
			}
			else
			{
				stk.push(s);
				break;
			}
		}
		if(d<0) wr(-1);
		else
		{
			if(d>0)
			{
				int so = stk.top();stk.pop();
				stk.push(so-1);
				while(d>1)
				{
					stk.push(0);
					d--;
				}
				stk.push(1);
			}
			while(stk.size()>0)
			{
				wr(stk.top());
				stk.pop();
			}
		}putchar('\n');
	}
}