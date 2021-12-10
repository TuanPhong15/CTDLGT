//DSA09001
#include<bits/stdc++.h>

using namespace std;

void check()
{
	int n, m;
	cin >> n >>m;
	vector< vector <int> > a (n+1);
	while (m--)
	{
		int x, y;
		cin >> x >> y;
		a[x].push_back (y);
		a[y].push_back (x);
	}
	for(int i = 1; i <= n; i++)
	{
		cout << i<< ": ";
		for(int index: a[i]) cout << index <<' ';
		cout<<endl;
	}
}
int main()
{
	int T;
	cin>>T;
	while (T--) check();
}