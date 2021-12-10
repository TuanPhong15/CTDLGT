//conech
#include<bits/stdc++.h>


using namespace std;
vector<unsigned long long> f(55,0);
void lun()
{
    f[1]=f[2]=f[3]=1;
    for(int i=2;i<51;i++)
    {
        if (i-1>=0) f[i]+=f[i-1];
        if (i-2>=0) f[i]+=f[i-2];
        if (i-3>=0) f[i]+=f[i-3];
    }
}
void check()
{
    int n;
    cin>>n;
    cout<<f[n]<<endl;
}
int main()
{
    lun();
    int T=1;
    cin>>T;
    while (T--)
    {
     check();
    }
}