#include<stdio.h>
#include<malloc.h>
#include <cstring>
struct Stack
{
    int top;
    unsigned capacity;
    int *a;
};

struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack=(struct Stack *)malloc(sizeof(struct Stack));
    stack->top=-1;
    stack->capacity=capacity;
    stack->a=(int *)malloc(capacity*sizeof(int));
    return stack;
}

int isEmpty(struct Stack *stack)
{
    return stack->top==-1;
}

char peek(struct Stack *stack)
{
    return stack->a[stack->top];
}

char pop(struct Stack *stack)
{
    if(isEmpty(stack))
        return '$';
    return stack->a[stack->top--];
}

void push(struct Stack *stack,char ch)
{
    stack->a[++stack->top]=ch;
}

int solve(char *bt)
{
    struct Stack *stack=createStack(strlen(bt));
    if(stack==NULL)
        return 0;
    int i;
    
    for(i=0;bt[i];i++)
    {
        if(bt[i]>='0' && bt[i]<='9')
            push(stack,bt[i]-'0');
        else
        {
            int op1=pop(stack);
            int op2=pop(stack);
            
            switch(bt[i])
            {
                case '+':
                    push(stack,op2+op1);
                    break;
                case '-':
                    push(stack,op2-op1);
                    break;
                case '*':
                    push(stack,op2*op1);
                    break;
                case '/':
                    push(stack,op2/op1);
                    break;
            }
        }
    }
    return pop(stack);
}

main()
{
    int t;char bt[21];
    scanf("%d",&t);
    while(t--)
    {
        
        scanf("%s",bt);
        printf("%d\n",solve(bt));
    }

}