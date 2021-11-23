
#include<stdio.h>
#include<ctype.h>
template <typename T> void re(T& x)
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
	if (n < 0) n *= -1, neg = 1; 
	char snum[20]; int i = 0; 
	do	{ snum[i++] = n % 10 + '0'; 	n /= 10; } 	while (n); 
	--i; 
	if (neg) putchar('-'); 
	while (i >= 0)	putchar(snum[i--]); 
	putchar(' '); 
} 



struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void append(struct Node** head_ref, struct Node **tail_ref,
           int new_data)
{
    struct Node* new_node = new Node(new_data);
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

Node* deleteAllOccurances(Node *head,int x)
{
    if(head==NULL)
        return head;
    Node *temp=head, *prev=NULL, *d;
    
    while(temp!=NULL)
    {
        if(temp->data==x)
        {
            if(prev)
                prev->next=temp->next;
            d=temp;
            if(temp==head)
            {
                head=head->next;
            }
            temp=temp->next;
            delete d;
            continue;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;

}

void printList(Node *head)
{
   while (head != NULL)
   {
      wr(head->data);
      head = head->next;
   }
   putchar('\n'); 
}

 main()
{
  int i,n,l;

    struct Node *head = NULL,  *tail = NULL;

        re(n);
        for(i=1;i<=n;i++)
        {
            re(l);
            append(&head, &tail, l);
        }

	int kk;
	re(kk);
    head =deleteAllOccurances(head,kk);
    printList(head);
    
 
}



