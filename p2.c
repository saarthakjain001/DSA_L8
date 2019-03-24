#include<stdio.h>
int main()
{
	int n;int a[100],b[100],p[100];int curr_time=0,wait=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		p[i]=0;
		scanf("%d %d",&a[i],&b[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int t1,t2;
				t1=a[i];
				t2=b[i];
				a[i]=a[j];
				b[i]=b[j];
				a[j]=t1;
				b[j]=t2;
			}
		}
	}
	for(int j=0;j<n;j++)
	{
		int mini=10000;int t=0,ind;
		for(int i=0;i<n;i++)
		{
			if(b[i]<=curr_time && p[i]==0)
			{
				p[i]=1;t=1;
				wait+=(curr_time+a[i]) - b[i];
				curr_time+=a[i];
				break;
			}
			else if(b[i]>curr_time && mini>b[i])
			{
				mini=b[i];
				ind = i;
			}
		}
		if(t==0)
		{
			curr_time=mini;
			p[ind]=1;
			wait+=(curr_time+a[ind])- b[ind];
		}
	}
	printf("%d",wait/n);
}