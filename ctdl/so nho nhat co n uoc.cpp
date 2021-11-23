#include<stdio.h>
long long min ( long long a, long long b)
{
	if(a<b) return a; return b;
}
int n;
 int v[]={2,3,5,7,11,13,17,19,23,29,31};
  long long res;
void Try(int i, long long ans, long long uoc)
   {
   	if(uoc>n)
return; 
if(uoc==n)
res=min(res, ans); 
for(int j=1;; j++)
{
	if(ans*v[i]>res) break;
	 ans*=v[i];
	  Try(i+1, ans, uoc*(j+1));
}


   }
void solve()
{
	scanf("%d",&n); res=1e18; Try(0,1,1); printf("%lld\n", res);
}


main()
{
	int t; scanf("%d",&t); while(t--)
	{
		solve();
	}
}



