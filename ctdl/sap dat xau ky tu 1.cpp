#include <iostream>
#include <queue>
using namespace std;
 int reorganizeString1(string S) {
        vector<int> mp(26);
        int n = S.size();
        for (char c: S)
            ++mp[c-'a'];
        priority_queue<pair<int, char>> pq;
        for (int i = 0; i < 26; ++i) {
            if (mp[i] > (n+1)/2) return -1;
            if (mp[i]) pq.push({mp[i], i+'a'});
        }
        return 1;
        }
int reorganizeString2(string S) {
        vector<int> mp(26);
        int n = S.size();
        for (char c: S)
            ++mp[c-'a'];
        priority_queue<pair<int, char>> pq;
        for (int i = 0; i < 26; ++i) {
            if (mp[i] > (n+1)/2) return -1;
            if (mp[i]) pq.push({mp[i], i+'a'});
        }
        return 1;
       
    }
int reorganizeString(string S) {
        vector<int> cnt(26);
	int mostFreq = 0, i = 0;

	for(char c : S)
		if(++cnt[c - 'a'] > cnt[mostFreq])
			mostFreq = (c - 'a');

	if(2 * cnt[mostFreq] - 1 > S.size()) return -1;

	return 1;
    }
main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	string s;
    int t; cin >> t;
    while (t--)
    {
        
        vector<int> dem(26);
         cin >> s;
    cout <<reorganizeString(s)<< '\n';
    }

}