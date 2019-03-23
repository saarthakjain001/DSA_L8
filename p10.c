#include<stdio.h>
int mini(int x,int y)
{
	if(x<y) return x;
	else return y;
}
int main()
{
	int n,m;int a[1000],count=0;
	scanf("%d %d\n",&n,&m);
	for(int i=0;i<n;i++)
	{
		char c;
		scanf("\t%c",&c);
		if(c=='R') a[i]=1;
		else if(c=='Y') a[i]=2;
		else if(c=='G') a[i]=3;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%3!=0)
		{
			count+=3-a[i];
			int x=(3-a[i]);
			for(int j=i;j<mini(i+m,n);j++)
			{
				a[j]=(a[j]+x)%3;
			}
		}
	}
	printf("%d",count);
}