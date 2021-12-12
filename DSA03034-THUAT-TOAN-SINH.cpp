//DSA03034
#include<bits/stdc++.h>

using namespace std;
int n;
bool check(string s)
{
    string res = "";
    for(char c: s) res = c+res;
    return (s == res);
}
vector<string> res;
void init(int spt,string s)
{
    if (spt>n)
    {
        if (check(s)) res.push_back(s);
        return;
    }
    for(char i='0';i<='1';i++)
    {
        init(spt+1,s+i);
    }
}
int main()
{
    cin>>n;
    init(1,"");
    // cout << res.size()<<endl;
    for(string s: res) 
    {
        for(char c: s) cout << c<<' ';
        cout<< endl;
    }
}
