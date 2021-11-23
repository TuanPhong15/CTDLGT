#include<bits/stdc++.h>
using namespace std;

int degree( char c ){ 
	if( c == '+' || c == '-' ) return 3;
	if( c == '*' || c == '/' ) return 4;
	if( c == '^' ) return 5;
	return 2;
}

void hauTo(){ 
	stack<char> stk;
	string s,res=""; cin>> s;
		for(int i =  0; i <=s.size()-1; i ++){
	if(s[i] >= 'A' && s[i] <= 'Z') res += s[i];
	else if(s[i] >= 'a' && s[i] <= 'z' )res += s[i];
	else if (s [i] == '(') stk.push(s[i]);
	else if (s [i] == ')')
	{
	    while(stk.size() && stk.top() != '(')
		{
			res+= stk.top();
			stk.pop();
		}
		stk.pop();	
	}
	else if(s[i] == '+' || s[i] == '-' || s[i] == '*'|| s[i] == '/'|| s[i] == '^')
	{
		while(stk.size() && degree(stk.top() )>= degree(s[i]))
		{
			res += stk.top();
			stk.pop();
		}
		stk.push(s[i]);
	}
	}
	while(stk.size())
	{
		if(stk.top() != '(') res += stk.top();
		stk.pop();
	}
cout << res <<'\n';
	}

main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int t; cin >>(t);

	while(t--)
	{
hauTo();
}

}
