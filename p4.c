#include<stdio.h>
void sortt(int *a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
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
int findp(int *a,int x,int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]<=x && a[i+1]>x) return i+1;
	}
	return n;
}
void change(int *a,int pos,int x,int n)
{
	int arr[100];
	for(int i=0;i<n;i++)
	{
		arr[i]=a[i];
	}
	int p=0;
	for(int i=2;i<pos;i++)
	{
		a[p] = arr[i];p++;
	}
	a[p] = x;p++;
	for(int i=pos;i<n;i++)
	{
		a[p]=arr[i];p++;
	}
}
int main()
{

	int n,m;int a[100];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sortt(a,n);
	int ch=0;int count=0;
	while(ch!=1)
	{
		int t=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]<m)
			{
				t=1;
				int x = a[i] + 2*a[i+1];
				change(a,findp(a,x,n),x,n);
				n--;
				count++;
				break;
			}
		}
		if(t==0) ch=1;
	}
	printf("%d",count);	
}