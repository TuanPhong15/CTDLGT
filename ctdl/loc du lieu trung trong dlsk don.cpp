#include <bits/stdc++.h>
using namespace std;

template <typename T> void re(T& x)
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
	if (n < 0) n *= -1, neg = 1; 
	char snum[20]; int i = 0; 
	do	{ snum[i++] = n % 10 + '0'; 	n /= 10; } 	while (n); 
	--i; 
	if (neg) putchar_unlocked('-'); 
	while (i >= 0)	putchar_unlocked(snum[i--]); 
	putchar_unlocked(' '); 
} 
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
wr(temp->data);
temp=temp->next;
}
}

Node * removeDuplicates( Node *head) 
{

  Node *temp=head;
   Node *prev=head;
  unordered_map<int,int>map;
  while(temp!=NULL){
      if(map.count(temp->data)>0){
           Node *temp2=temp->next;
           prev->next=temp2;
           temp=prev;
      }else{
           map[temp->data]=1;
      }
      prev=temp;
      temp=temp->next;
  }
  return head;
}

main() {


		int K;
		re(K);
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		re(data);
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	
		Node *result  = removeDuplicates(head);
		print(result);
			putchar_unlocked('\n'); 

}


