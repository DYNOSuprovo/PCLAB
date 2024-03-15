#include <stdio.h>
int sum(int a[],int);
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Sum=%d",sum(a,n));
}
int sum(int a[],int n)
{
	int s=0,i;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	return s;
}
