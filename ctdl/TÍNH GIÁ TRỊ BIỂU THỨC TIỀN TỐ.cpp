#include <bits/stdc++.h>
using namespace std;
 
bool check(char c)
{
    return isdigit(c);
}
 
int solve(string str)
{
    stack<int> stk;
 
    for (int j = str.size() - 1; j >= 0; j--) {
        if (check(str[j]))
            stk.push(str[j] - '0');
 
        else {
            int o1 = stk.top();
            stk.pop();
            int o2 = stk.top();
            stk.pop();
            switch (str[j]) {
            case '+':
                stk.push(o1 + o2);
                break;
            case '-':
                stk.push(o1 - o2);
                break;
            case '*':
                stk.push(o1 * o2);
                break;
            case '/':
                stk.push(o1 / o2);
                break;
            }
        }
    }
 
    return stk.top();
}

main()
{
    int t;string bt;
    scanf("%d",&t);
    while(t--)
    {
        
        cin>>(bt);
        printf("%d\n",solve(bt));
    }
  
}