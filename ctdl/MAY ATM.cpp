#include<iostream>
using namespace std;

int n, c[50], a[50],stop=0, s;
void sinh(int k)
{
    int i=k;
    while(i>0 && c[i] == n-k+i) i-=1;
    if(i<=0) stop=1;
    else
    {
        c[i] +=1;
        for(int j=i+1;j<=k;j++)
             c[j] = c[j-1]+1;
    }
}
void solve()
{
			  cin>>n>>s;
    for(int i=1; i<=n; i++)
     cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        stop=0;
        for(int j=1; j<=i; j++)
    c[j]=j;

        while(!stop)
        {
        	int res = 0 ;
        	for(int j = 1 ; j <=i;j++)
        	res += a[c[j]];
        	if(res == s)
        	{
        		cout << i<<'\n';
        		return;
			}
			sinh (i);
        	
        	
        }
        
		} cout << -1<<'\n';
}
main()
{
	int t; cin >> t;
	while(t--)
	{
solve();
	}
  }