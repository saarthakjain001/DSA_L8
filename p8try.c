#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);int a[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int pt1=0,pt2=0,pt3=0,pt4=0,count=0,sum=0;
	for(pt1=0;pt1<n;pt1++)
	{
		for(pt2=pt1;pt2<n;pt2++)
		{
			for(pt3=0;pt3<n;pt3++)
			{
				for(pt4=pt3;pt4<n;pt4++)
				{
					count=0;
					for(int i=pt1;i<=pt2;i++)
					{
						for(int j=pt3;j<=pt4;j++)
						{
							if(a[i][j]==1)
							{
								count++;
							}
						}
					}
					if(count==1) sum++;
				}
			}
		}
	}
	printf("%d",sum);
}