
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll l=s.length();
        //ll ct1=0,ct2=0;
        ll i;
     
        stack<char> stc;
        for(i=0;i<l;i++)
        {
            if (s[i]==')' && !stc.empty()) 
        { 
            if (stc.top()=='(') 
                stc.pop(); 
            else
                stc.push(s[i]); 
        } 
        else
            stc.push(s[i]); 
        }
        float ct1=0,ct2=0;
        while(stc.empty()==false)
        {
            if(stc.top()=='(')
            {
                ct1++;
            }
            else
            {
                ct2++;
            }
            stc.pop();
        }
        ll p=ceil(ct1/2)+ceil(ct2/2);
        cout<<p<<endl;
        
    }
    
}