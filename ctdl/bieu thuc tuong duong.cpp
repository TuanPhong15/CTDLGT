#include<bits/stdc++.h>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int t; cin>>(t);
	while(t--)
	{
		string s;
		cin >> s;
		stack<int> stk;
		for(int i = 0; i <s.size();i++)
		{
			if(s[i]=='(') stk.push(i);
			else if(s[i]==')')
			{
				if(stk.size()>0)
				{
					int top = stk.top(); stk.pop();
					if(top == 0)continue;
					else if(s[top-1]=='+') continue;
						else if(s[top-1]=='-') 
						{
							for(int j = top ; j <= i; j++)
							{
								if(s[j]=='+') s[j]='-';
								else if (s[j]=='-') s[j] ='+';
							}
							
						}
				}
			}
		}
				for(int i = 0; i <s.size();i++)
if(s[i]!='(' && s[i] != ')')
cout <<s[i];
cout<<'\n';
	}}