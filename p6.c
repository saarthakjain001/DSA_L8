#include<stdio.h>
int top=-1,stack[1000];
void push(int *a,int x)
{
	top++;
	a[top]=x;
	if(top==0)
	{
		stack[top]=a[top];
	}
	else
	{
		if(stack[top-1]<a[top])
		{
			stack[top]=stack[top-1];
		}
		else
		{
			stack[top]=a[top];
		}
	}
}
int pop(int *a)
{
	if(top==-1) 
	{
		printf("stack underflow");
		return -1;
	}
	return a[top--];
}
int mini()
{
	if(top==-1)
	{
		printf("stack underflow");
		return -1;
	}
	return stack[top];
}
int main()
{
	int n=0;int a[100];
	while(n!=5)
	{
		printf("1- push, 2- pop, 3- mini , 5 - quit");
		scanf("%d",&n);
		if(n==1)
		{
			int c;
			scanf("%d",&c);
			push(a,c);
		}
		else if(n==2)
		{
			printf("%d\n",pop(a));
		}
		else if(n==3)
		{
			printf("%d\n",mini());
		}
		else
			break;
	}
}