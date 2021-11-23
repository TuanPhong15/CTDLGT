#include<iostream>
using namespace std;

template <typename T>
void re(T& x)
{
    x = 0; T f = 1;
    char ch = getchar_unlocked();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar_unlocked();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar_unlocked();
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
		putchar_unlocked('-'); 

	while (i >= 0) 
		putchar_unlocked(snum[i--]); 

	putchar_unlocked('\n'); 
} 
main()
 {ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int t, n;
re(t);
while(t--)    {

     re(n);
     int luu[10];
     for(int i=0;i<10;i++)
     luu[i]=0;
     int m[n];
     for(int i=0;i<n;i++)
      re(m[i]);
      int dem=0;
       for(int i=0;i<n;i++)
       {
           int t=m[i];
           while(t>0)
           {
               int q=t%10;
               t=t/10;
               if(luu[q]==0)
               {
                   luu[q]=1;
                   dem++;
               }
               if(dem==10)
               break;
           }
       }
       string s="";
      for(int i=0;i<10;i++)
      if(luu[i]==1)
       s=s+to_string(i)+" ";
   cout << s << '\n';
   }




}
