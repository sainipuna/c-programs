#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("the factorial of n %d:%d",n,fact);
	return 0;
}
