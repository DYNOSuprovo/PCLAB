#include <stdio.h>
int s(int n,int m)
{
	if(m!=0)
		return s(m,n%m);
	else
		return n;
}
int main(){
	int a,n,m;
	scanf("%d %d",&n,&m);
	a=s(n,m);
	printf("%d",a);
}
