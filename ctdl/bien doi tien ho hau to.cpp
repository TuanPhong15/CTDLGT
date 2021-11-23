#include<bits/stdc++.h>
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int t; cin >>(t);
	string s;
	while(t--)
	{
cin >> s;
		stack<string> stk;
		for(int i =  0; i <=s.size()-1; i ++)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*'|| s[i] == '/'|| s[i] == '%'|| s[i] == '^')
			{
				string fi = stk.top();stk.pop();
				string se = stk.top();stk.pop();
				string tmp = s[i]+se+fi;
				stk.push(tmp);
			}else stk.push(string(1,s[i]));
	}
	cout << stk.top()<<'\n';
}}
