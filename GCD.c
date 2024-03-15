#include <stdio.h>
int s(int n,int m)
{
	int t;
	while(m!=0)
	{
		t=m;
		m=n%m;
		n=t;
	}
	return n;
}
int main(){
	int a,n,m;
	scanf("%d %d",&n,&m);
	a=s(n,m);
	printf("%d",a);
}
