#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
void prepare()
{

}
void solve()
{
	int n;
	cin >> n;
	cin.ignore(); 
	vector< vector<int> > a(n+1);
	for(int i = 1; i <= n; i++)
	{
		string s;
		int j = 0;
		getline(cin,s);
		while (j < s.length())
		{
			int so = 0;
			while (j < s.length() && s[j] == ' ') j++;
			while (j < s.length() && s[j] != ' ')
			{
				so = so * 10 + (s[j] - '0');
				j++;
			}
			a[i].push_back(so);
		}
	}
	for(int i = 1; i <=n ; i++)
	{
		sort(a[i].begin(), a[i].end());
		for(int tmp:a[i]) 
		{
			if (tmp > i)
				cout << i << ' ' << tmp << endl;
		}
	}
}
int main()
{
	int t=1;
	//cin>>t;
	while (t--) solve();
}