#include<iostream>
using namespace std;
 string sum(string &num1, string &num2) {
        int len1 = num1.size()-1, len2 = num2.size()-1, end = min(len1, len2);
        char c;
        bool carry = false;
        string first, second;
        first = len1 > len2 ? num1.substr(0, len1 - len2) : num2.substr(0, len2 - len1);
        second.resize(min(len1, len2)+1);
        for(int i=0;i<=end;i++)
        {
            c = num1[len1-i] + num2[len2-i] - '0';
            if(carry) c++, carry = false;
            if(c > '9')  carry = true, c -= 10;
            second[second.size()-i-1] += c;
        }
        for(int i=first.size()-1;i>=0 && carry;i--)
        {
            if(first[i] == '9') first[i] = '0';
            else first[i]++, carry = false;
        }
        return carry ? '1' + first + second : first + second;}
main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	string a,b;
		while(cin>>(a)>>(b))
		{
		for(int i = 0; i< a.size();i++)
		if(a[i]=='6') a[i]='5';
		
		for(int i = 0; i< b.size();i++)
		if(b[i]=='6') b[i]='5';
		
		cout << sum(a,b) << ' ';
		
		for(int i = 0; i< a.size();i++)
		if(a[i]=='5') a[i]='6';
		
		for(int i = 0; i< b.size();i++)
		if(b[i]=='5') b[i]='6';
		
		cout << sum(a,b)<< '\n';
		}
	
}