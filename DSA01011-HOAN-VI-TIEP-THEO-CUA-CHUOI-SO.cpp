//DSA01011
#include<bits/stdc++.h>

using namespace std;

string next(string a)
{
    int pos=(int)a.length()-2;
    while (pos>=0&&a[pos]>=a[pos+1]) pos--;
    if (pos==-1) return a;
    int i=a.length()-1;
    while (a[i]<=a[pos]) i--;
    swap(a[i],a[pos]);
    int right=a.length()-1,left=pos+1;
    while (right>left)
    {
        swap(a[right],a[left]);
        right--;
        left++;
    }
    return a;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int k;
        string s;
        cin>>k;
        cin>>s;
        string stmp=next(s);
        cout<<k<<' ';
        if (s==stmp) cout<<"BIGGEST";
        else cout<<stmp;
        cout<<endl;
    }
}