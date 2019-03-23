#include<stdio.h>
int c=0;
int mini(int *a,int n,int strt,int end)
{
	int mini=a[strt],ind=strt;
	for(int i=strt+1;i<end;i++)
	{
		if(a[i]<mini)
		{
			mini=a[i];
			ind = i;
		}
	}
	return ind;
}
int counting(int *a,int n,int strt,int end,int ind)
{
	return a[ind] * (ind -strt+1) * (end -ind);
}
void count(int *a,int n,int strt,int end)
{
	if(strt<end)
	{
	int in = mini(a,n,strt,end);
	c+=counting(a,n,strt,end,in);
	count(a,n,strt,in);
	count(a,n,in+1,end); 	
	}
}
int main()
{
	int n;int a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	count(a,n,0,n);
	printf("%d",c);
}