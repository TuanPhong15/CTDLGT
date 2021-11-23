#include<iostream>
#include<algorithm>

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


} 
class data{
	public:
	int stt,f,s;
};
data a[1005];
bool cmp(data a, data b)
{
	return a.s > b.s;
}

main()
{
	int t,n; re(t);
	while(t--)
	{
		re(n);
		for(int i = 0; i < n; i++)
		{
			re(a[i].stt);
			re(a[i].f);
			re(a[i].s);
		}
		std::sort(a,a+n,cmp);
		int d = 0, res = 0;
		int f[1001]={0};
		for(int i = 0; i < n; i++)
		{
			while(f[a[i].f]&&a[i].f>0) a[i].f -=1;
			if(!f[a[i].f]&& a[i].f >0)
			{
				f[a[i].f]=1;
				res+= a[i].s;
				d++;
			}
		}
		wr(d);putchar_unlocked(' '); wr(res);
	putchar_unlocked('\n'); 

	}
}