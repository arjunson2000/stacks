#include<stdio.h>
#define max 10
int tos=-1,p;
int a[10];
void push(int);
void pop();
int main()
{	int ch,i;
	while(1)
	{
	printf("enter push(1) and pop(0):");
	scanf("%d",&ch);
			
	 switch(ch)
	 {
		case 1:printf("\nenter a data:");
			   scanf("%d",&p);
			   push(p);
			   break;
		case 2:pop();
			   break;
	    default: printf("enter either 0 or 1");	   
	 } 
    }
}
	void push(int p)
	{
		if(tos==max-1)
		{
			printf("stack overflow");
		}
		else
		{
			tos=tos+1;
			a[tos]=p;
		}
	}
	void pop()
	{
		if(tos==-1)
		{
			printf("stack underflow");
		}
		else
		{
			a[tos]=0;
			tos=tos-1;
		}
	}
