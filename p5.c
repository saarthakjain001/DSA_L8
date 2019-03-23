#include<stdio.h>
int power(int x,int y)
{
	int a=1;
	for(int i=0;i<y;i++)
	{
		a=x*a;
	}
	return a;
}
void sortt(int *a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
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
	int n;int a[100];int n1=0,n2=0,pow1=0,pow2=0;int sum;
	scanf("%d ",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sortt(a,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			n1+=a[i]*power(10,pow1);pow1++;
		}
		else
		{
			n2+=a[i]*power(10,pow2);pow2++;
		}
	}
	sum=n1+n2;
	printf("%d %d\n",n1,n2);
	printf("%d",sum);
}