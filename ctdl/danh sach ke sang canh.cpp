 #include<iostream> 
#include<vector> 
#include<algorithm> 
using namespace std;
#include<stdio.h>
#include<ctype.h>
template <typename T>
void re(T& x)
{
    x = 0; T f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
    x *= f;
}

template<typename T> void wr(T n) 
{ 
	bool neg = 0; 

	if (n < 0) 
		n *= -1, neg = 1; 

	char snum[20]; 
	int i = 0; 
	do
	{ 
		snum[i++] = n % 10 + '0'; 
		n /= 10; 
	} 

	while (n); 
	--i; 

	if (neg) 
		putchar('-'); 

	while (i >= 0) 
		putchar(snum[i--]); 

} 


 main()
{ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n; string s; cin >> n; cin.ignore(); vector<int> ke[100];
 for(int i=1;i<=n;i++){
	getline(cin,s); s +=" "; int so =0; int j=0;
while(j<s.size()){

if(s[j] >='0' && s[j] <='9')
so = 10*so + (int)(s[j]-'0');
 else if(so>0)
 {
 	ke[i].push_back(so);  so=0;

 }j++;}
}

for(int i=1;i<n;i++)
sort(ke[i].begin(), ke[i].end());

for(int i = 1; i <=n;i++)
for(int j = 0; j<ke[i].size();j++)
if(i<ke[i][j])
{
	wr(i);putchar(' ');wr(ke[i][j]);putchar('\n');
 } }

