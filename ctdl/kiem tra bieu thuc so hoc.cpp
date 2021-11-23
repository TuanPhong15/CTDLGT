#include<bits/stdc++.h>
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int t; cin >>(t);
	cin.ignore();
	string s;
	while(t--)
	{
		 getline(cin,s);
		bool ok;
		stack<char> stk;
		for(int i = 0; i < s.size(); i ++)
		{
			if(s[i] == ')')
			{
				ok = true;
				char top = stk.top();
				stk.pop();
				while(top != '(')
				{
					if(top == '+' || top == '-' || top == '*'|| top == '/')
					ok = false;
					top = stk.top();stk.pop();
				}
				if(ok) break;
			}
			else stk.push(s[i]);
		}
		if(ok) puts("Yes");
		else puts("No");
	}
}
