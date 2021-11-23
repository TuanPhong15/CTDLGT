#include<iostream>
#include<queue>
#define int long long
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

	 putchar('\n'); 
} 
main()
{
	int t; re(t);
	while(t--)
	{
	int k; std::string s;
	re(k); std::cin >> s;
	 for(int i = 0; i < s.size(); i++) s[i]=tolower(s[i]);
	int d[300]={0};
	for(int i = 0; i < s.size(); i++)
	 d[s[i]]++;
	 std::priority_queue<int,std::vector<int>>q;
	 for(int i = 0; i < s.size();i++)
	 {
	 	if(d[s[i]]>0)
	 	{
	 		q.push(d[s[i]]);
	 		d[s[i]]=0;
		 }
	 }
	 while(k>0 && q.size()>0)
	 {
	 	k -=1;
	 	int t = q.top();q.pop();
	 	t--;
	 	q.push(t);
	 }
	 long long res = 0;
	 while(q.size()>0)
	 {
	 	int t = q.top(); q.pop();
	 	res += t*t;
	 }
	 wr(res);

	}
}