#include <iostream> 
using namespace std; 
  
int check(unsigned long long int x, unsigned long long int y, unsigned long long int p)  
{  
    int a = 1;
    x = x % p; 
    if (x == 0) return 0; 
    while (y > 0)  
    {  
        if (y&1)  
            a = (a*x) % p;  
         y = y/2  ;
        x = (x*x) % p;  
    }  
    return a;  
}  
  

main()  
{  
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    unsigned long long int x,y ;  
    int t;
	cin>>t;;
	while(t--)
	{
	cin>>x>>y;
    cout << check(x, y, 1e9+7)<<endl;  
	}
 
}
