#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
vector<vector<string> > grayCode(15);
void prepare()
{
	grayCode[1].push_back("0");
	grayCode[1].push_back("1");
	for(int i = 2; i <=10; i++)
	{
		for(int j = 0; j < grayCode[i-1].size(); j++)
		{
			grayCode[i].push_back('0'+grayCode[i-1][j]);
		}
		for(int j = grayCode[i-1].size()-1; j >=0 ; j--)
		{
			grayCode[i].push_back('1'+grayCode[i-1][j]);
		}
	}
}
void in(int n, int so)
{
	string res = "";
	while (so>0)
	{
		if (so % 2)	res = '1'+res;
		else res = '0'+res;
		so/=2;
	}
	while (res.length() < n) res = '0'+res;
	cout<<res<<endl;
}
void solve()
{
	string s;
	cin >> s;
	int vt = 0;
	for(int i = 0; i < grayCode[s.length()].size(); i++)
	{
		if (grayCode[s.length()][i] == s) 
		{
			in(s.length(),i);
			break;
		}
	}
}
int main()
{
	prepare();
	int t=1;
	cin>>t;
	while (t--) solve();
}