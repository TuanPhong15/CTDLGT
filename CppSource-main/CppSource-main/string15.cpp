#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	string s;
	int res=0;
	cin>>s;
	for(int i=0;i<s.length();i++)
		for(int j=i;j<s.length();j++)
			if (s[i]==s[j]) res++;
	cout<<res<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}