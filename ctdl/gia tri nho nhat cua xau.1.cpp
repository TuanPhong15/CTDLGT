#include<bits/stdc++.h>
#define int long long
using namespace std;
main() { 


	int test,k;
	cin>>test;
	while(test--)
	{
	    string s;cin>>k;
	    cin>>s;
	    for(int i = 0; i < s.size(); i++) s[i]=tolower(s[i]);
	    
	    int frequency[26]={0};
	    for(int i=0;i<s.length();i++)
	    {
	       frequency[s[i]-'a']++;
	    }
	    priority_queue<int> a;
	    for(int i=0;i<26;i++)
	    {
	        a.push(frequency[i]);
	    }
	    while(k--)
	    {
	        int temp=a.top();
	        temp--;
	        a.pop();
	        a.push(temp);
	    }
	    int sum=0;
	    while(!a.empty())
	    {
	        int temp=a.top();
	        sum+=temp*temp;
	        a.pop();
	    }
	    cout<<sum<<endl;
	}
}