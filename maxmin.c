#include <stdio.h>
int mm(int a[],int,int,int);
int main()
{
	int l,i,n,m;
	scanf("%d",&l);
	int a[l];
	for(i=0;i<l;i++)
		scanf("%d",&a[i]);
	m=a[0];
	n=a[0];
	mm(a,l,m,n);
		
}
int mm(int a[],int l,int m,int n)
{	
	for(int i=0;i<l;i++){
	if(a[i]>m)
		m=a[i];
	if(n>a[i])
		n=a[i];}
	printf("m=%d",m);
	printf("n=%d",n);
}


