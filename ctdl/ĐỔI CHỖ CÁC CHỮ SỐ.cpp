#include<stdio.h>
#include<string.h>
void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
void findmax(char s[30],int k,char max[30])
{
    int i,j;
    if(k==0)
    return ;
    for(i=0;i<strlen(s)-1;i++)
    {
        for(j=i+1;j<strlen(s);j++)
        {
            if(s[i]<s[j])
            {
                swap(&s[i],&s[j]);
                if(strcmp(max,s)<0)
                strcpy(max,s);
                findmax(s,k-1,max);
                swap(&s[i],&s[j]);
            }
        }
    }
}
int main() {
	int t;
	char s[30],max[30];
	int k=4;
	scanf("%d",&t);
	while(t--)
	{
	  scanf("%d",&k);
	  scanf("%s",s);
	  strcpy(max,s);
	  findmax(s,k,max);
	  printf("%s\n",max);
	}
	return 0;
}