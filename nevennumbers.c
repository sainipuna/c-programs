#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	while((i<=n)&&(i%2==0))
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}

