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

} 
void permute(vector<int>& nums, int n) {
 
         do {
    for(int i = 0; i < n ; i++) wr(nums[i]);
    putchar_unlocked(' '); 
  } while ( next_permutation(nums.begin(),nums.end()) );
}

main() {
	int t,n; re(t);
	while (t--){
    re(n);
    vector<int> a(n);
    for(int i = 0; i < n ; i++) a[i] = i+1;
       permute(a,n);
	putchar_unlocked('\n');
	}
    
}
