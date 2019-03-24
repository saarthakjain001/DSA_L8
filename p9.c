#include<stdio.h>
int top=0;
void sortt(int *a)
{
	for(int i=0;i<top-1;i++)
	{
		for(int j=i+1;j<top;j++)
		{
			if(a[i]>a[j])
			{
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}
	}
}
int main()
{
	int n;int a[1000],que[1000],sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		
		if(top==0)
		{
			que[0]=a[i];
			top++;
		}
		else
		{
			if(que[0]>a[i])
			{
				que[top]=a[i];
				top++;
				sortt(que);
			}
			else
			{
				sum+=a[i]-que[0];
				que[0]=a[i];
				sortt(que);
			}
		}
	}
	printf("%d",sum);
}