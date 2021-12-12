//DSA01013
#include<bits/stdc++.h>


using namespace std;
vector<vector<string> > grayCode(15);
void init()
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
	init();
	int T;
	cin>>T;
	while (T--) solve();
}