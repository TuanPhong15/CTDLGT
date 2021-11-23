#include<iostream>
#include<queue>
using namespace std;
class node
{
public:
int a[10];
node(){}
void input()
{
for(int i=0; i<10; ++i)
cin>>a[i];
}

node left()
{
node b;
b.a[0] = a[3];
b.a[1] = a[0];
b.a[2] = a[2];
b.a[3] = a[7];
b.a[4] = a[4];
b.a[5] = a[1];
b.a[6] = a[6];
b.a[7] = a[8];
b.a[8] = a[5];
b.a[9] = a[9];
return b;
}

node right()
{
node b;
b.a[0] = a[0];
b.a[1] = a[4];
b.a[2] = a[1];
b.a[3] = a[3];
b.a[4] = a[8];
b.a[5] = a[5];
b.a[6] = a[2];
b.a[7] = a[7];
b.a[8] = a[9];
b.a[9] = a[6];
return b;
}
bool isroot()
{
if(a[0]!=1 || a[1]!=2 || a[2]!=3 || a[3]!=8 ||
a[4]!=0 ||a[5]!=0 || a[6]!=4 || a[7]!=7 ||
a[8]!=6 || a[9]!=5)
return false;
return true;
}
};
int main()
{
queue< pair<node, int> > q;
node b;
b.input();
q.push(make_pair(b,0));
pair<node, int> u;
while(true)
{
u = q.front();
q.pop();
b=u.first;
if(b.isroot())
{

cout<<u.second;
break;
}
else
{
q.push(make_pair(b.left(),u.second+1));
q.push(make_pair(b.right(),u.second+1));
}
}

}