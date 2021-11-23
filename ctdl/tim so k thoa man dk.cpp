#include <bits/stdc++.h>
using namespace std;
  

vector<string> res;

bool isValidNum(string x)
{

    map<int, int> mp;
  
    for (int i = 0; i < x.length(); i++) {

        if (mp.find(x[i] - '0') != mp.end()) {
            return false;
        }

        else if (x[i] - '0' > 5) {
            return false;
        }
  
        else {
            mp[x[i] - '0'] = 1;
        }
    }
    return true;
}

void generate()
{
  
    queue<string> q;
    q.push("1");
    q.push("2");
    q.push("3");
    q.push("4");
    q.push("5");

    bool flag = true;

    res.push_back("0");
  
    while (!q.empty()) {
        string x = q.front();
        q.pop();

        if (isValidNum(x)) {
            res.push_back(x);
        }

        if (x.length() == 6)
            continue;

        for (int i = 0; i <= 5; i++) {
            string z = to_string(i);

            string temp = x + z;
 
            q.push(temp);
        }
    }
}

bool comp(string a, string b)
{
    if (a.size() == b.size())
        return a < b;
    else
        return a.size() < b.size();
}

int solve(string l, string r)
{
  
    res.clear();
    generate();
    int count = 0;
    for (int i = 0; i < res.size(); i++) {
  
        string a = res[i];
        if (comp(l, a) && comp(a, r)) {
            count++;
        }
        else if (a == l || a == r) {
            count++;
        }
    }
  
    return count;
}
 main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
string l , r ;
	int t; cin >> t;
	while(t--)
	{
    cin >> l >> r;
    cout << solve(l, r)<<'\n';
	}
   
  

}