#include<bits/stdc++.h>
 using namespace std;
 int k,n,m; string s[102];
  vector< string > res; char a[5][5];
   bool ok [5][5], check; 
 int X[]={-1, -1,-1,0,0,1,1,1};
  int Y[]={-1,0,1,-1,1,-1,0,1};
void init()
{res.clear();
	cin >> k >>m >>n;
	for(int i=0;i<k; i++)
cin >> s[i]; 
for(int i=1;i<=m; i++)
for(int j=1;j<=n; j++)
cin >> a[i][j];

}
void Try(int i, int j, string tmp)
{
	for(int l=0;l<k;l++) 
	if(s[l] == tmp)
res.push_back(tmp);
for(int l=0;l<8;l++)
{
	int x = i + X[l]; int y = j + Y[l];
	 if( x >=1 && y >=1 && x <= m && y <=n && !ok[x][y])
	 {
	 	ok[x][y] = true; 
		 Try(x,y, tmp+a[x][y]); 
		 ok [x][y]=false;
	 }
}

}



 main()
 {
int t; cin >> t; while(t--)
{
	init(); 
	for(int i=1;i<=m; i++)
	{
      for(int j=1; j<=n; j++)
      {
memset(ok, false,sizeof(ok));
 string s="";
  ok[i][j]=true;
   Try(i, j,s + a[i][j]);
}}
if(res.size()==0)
cout <<-1; 
else
{
for(int i=0;i<res.size(); i++)
cout << res[i]<<' ';
}

cout << endl;
}
 }