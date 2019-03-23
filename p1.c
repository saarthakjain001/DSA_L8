#include<stdio.h>
double ar[1000];int p=0; 
void change(double *a,int x)
{
	double arr[100];int in=0;
	for(int i=0;i<p;i++)
	{
		arr[i]=ar[i];
	}
	for(int i=0;i<p;i++)
	{
		if(arr[i]<x) ar[i]=arr[i];
		else 
		{
			in=i;
			break;
		}
	}
	ar[in]=x;
	for(int i=in+1;i<p+1;i++)
	{
		ar[i] = arr[i-1];
	}
	p++;
}
int main()
{
	int n;double a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("\t%lf",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		change(a,a[i]);
		if(i%2==0)
		{
			printf("%f\n",(double)ar[(i+1)/2]);
		}
		else
		{
			printf("%f\n",(double)((ar[i/2]+ar[(i/2)+1])/2));
		}
	}
}