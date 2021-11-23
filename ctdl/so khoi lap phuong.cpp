#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

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
map<long long, bool> d;
int u[20];
long long res;
vector<int> a;
void Try(int i, int n)
{
	for(int j = 0; j <=1; j ++)
	{
		u[i]=j;
		if(i==n-1)
		{
			long long ans = 0;
			for(int l = 0; l<n; l++)
			{
				if(u[l]==1)
				  ans = 10*ans+a[l];
			}
			if(d[ans]==1&&ans!=0 && res < ans)
			  res = ans;
		}
		else Try(i+1,n);
	}
}
main()
{
	for(long long i = 1; i <= 1000000; i++)
	d[i*i*i] =1;
	int t; long long n; re(t);
	while(t--)
	{
		 re(n);
		a.clear();
		while(n)
		{
			a.emplace_back(n%10);
			n/=10;
		}
		reverse(a.begin(),a.end());
		res =-1;
		Try(0,a.size());
		wr(res);
	}
}