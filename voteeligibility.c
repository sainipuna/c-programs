#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a\n");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("a is eligible to vote");
	}
	else
	{
		printf("a is not eigible to vote");
	}
	return 0;
}
