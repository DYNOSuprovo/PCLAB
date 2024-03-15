#include <stdio.h>
int s(int n)
{
	if(n!=0)
		return n+s(n-1);
	else
		return n;
}
int main(){
	int a,n;
	scanf("%d",&n);
	a=s(n);
	printf("%d",a);
}
