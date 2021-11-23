#include <iostream>
using namespace std;

string ans;
void solve(string s,int m,int cur)
    {
        ans=max(ans,s);
        if(cur==s.size()) return;
        if(m==0) return;
        char temp=s[cur];
        for(int i=cur+1;i<s.size();i++)
            if(s[i]>temp) 
                temp=s[i];
        if(temp==s[cur]) solve(s,m,cur+1);
        for(int i=cur+1;i<s.size();i++)
        {
            if(s[i]==temp)
            {
                swap(s[i],s[cur]);
                solve(s,m-1,cur+1);
                swap(s[i],s[cur]);
            }
        }
    }
    
string solve(string str, int k)
    {
       ans=str;
       solve(str,k,0);
       return ans;
    }

main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        cout<< solve(str, k) << '\n';
    }
}
