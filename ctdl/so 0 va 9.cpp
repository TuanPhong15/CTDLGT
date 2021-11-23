#include <algorithm>
#include<iostream>
#include <stack>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; ++i)
#define FOR(i, x, y) for(int i = x; i <= y; ++i)
#define pb push_back
#define PSI pair<string, int>

bool cmp(string& s1, string& s2)
{
	if (s1.size() != s2.size()) return s1.size() < s2.size();
	int n = s1.size();
	REP(i, n)
		if (s1[i] != s2[i])
			return s1[i] == 0;
	return false;
}

string dp[777];
string ans[777];

string finds(int x)
{	
	FOR(i, 0, x) dp[i] = "";
	deque<PSI> d;
	dp[9 % x] = "9";
	d.pb(PSI("9", 9 % x));
	while(dp[0] == "")
	{
		string s = d.front().first;
		int r = d.front().second;
		d.pop_front();
		
		int r1 = r * 10 % x;
		if (dp[r1] == "")
		{
			string s1 = s + "0";
			dp[r1] = s1;
			d.pb(PSI(s1, r1));
		}
		
		int r2 = (r * 10 + 9) % x;
		if (dp[r2] == "")
		{
			string s2 = s + "9";
			dp[r2] = s2;
			d.pb(PSI(s2, r2));
		}
	}
	return dp[0];
}


main()
{   
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

	FOR(i, 1, 500) 
		ans[i] = finds(i);
	
	int t;
	cin >> t;
	while(t--)
	{
		int x;
		cin >> x;
		cout << ans[x] << "\n";
	}	
} 