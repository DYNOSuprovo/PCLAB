#include <stdio.h>
int find(int a[],int,int);
int main()
{
	int n,i,f;
	scanf("%d %d",&n,&f);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	f=find(a,n,f);
	if(f==-1)
		printf("Not");
	else
		printf("%d",i+1);
}
int find(int a[],int n,int f)
{
	int i,c=0;
	for(i=0;i<=n;i++)
	{
		if(f==a[i])	
			{return i;
			break;}
			
	}
		return -1;
}
