#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	printf("%d is a perfect number");
	else 
	printf("%d is not a perfect number");
	return 0;
}
