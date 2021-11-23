#include<bits/stdc++.h>

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
int n, k; int a[100]; std::vector< std::vector< int > > res;
 void Try(int i, int sum, std::vector <int>v)
 {
 	if(sum > k)
return;
 if(sum==k)
 {
 	res.push_back(v); return;
 }

for(int j=i; j<=n; j++)
if(sum + a[j] <= k)
{
	v.push_back(a[j]); Try(j, sum + a[j],v); v.pop_back();
}

 }

main()
{
int t; re(t); while(t--)
{
	re(n);re(k);
	for(int i=1;i<=n; i++)
re(a[i]); 
std::sort(a+1, a+n+1);
std::vector<int> v;v.clear(); res.clear();
 Try(1,0,v);
  if(res.size()==0)
  {
  	wr(-1);	putchar_unlocked('\n'); 
 continue;
  }
for(int i=0;i<res.size(); i++)
{
	 putchar_unlocked('[');
 for(int j = 0; j < res[i].size()-1; j ++)
 {
 	wr(res[i][j]);	putchar_unlocked(' '); 
 }

 wr(res[i][res[i].size()-1]); putchar_unlocked(']');

}
putchar_unlocked('\n');
}	
}



