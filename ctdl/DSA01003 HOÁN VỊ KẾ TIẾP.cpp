#include<iostream>
#include<vector>
#include<algorithm>
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

	putchar_unlocked(' '); 
} 

/*void solve(vector<int>& nums) {
        int n =nums.size();
        int k,l;
        if(n<=1)
        {
            return;
        }
        for(k=n-2;k>=0;k--)
        {
            if(nums[k] < nums[k+1])
            {
                break;
            }
        }
        if(k<0)
        {
            reverse(nums.begin(),nums.end());
            
        }
        else
        {
        for(l = n-1;l>k;l--)
        {
            if(nums[l] > nums[k])
            {
                break;
            }
        }
        swap(nums[l],nums[k]);
        reverse(nums.begin()+k+1,nums.end());
        }
        
}*/

int n,a[1000];

main()
{
		int t; 
	re(t);
	while(t--)
	{
 int i;
  re(n);
 for (i = 0; i < n; i++)
  re(a[i]);
  next_permutation(a,a+n);
  for (i = 0; i < n; i++)
  wr(a[i]);
 putchar_unlocked('\n'); 
	}
}