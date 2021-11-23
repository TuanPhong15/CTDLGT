#include<bits/stdc++.h>
using namespace std;
void binary(int n)
{
    int count=0;
    queue<string>q;
    q.push("1");
    while(!q.empty() && count<n)
    {
        string k = q.front();
        cout << k << " ";
        count++;
        q.pop();
        q.push(k+"0");
        q.push(k+"1");
    }
}
main()
 {
 	ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    binary(n);
	    cout << "\n";
	}
}