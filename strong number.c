#include<stdio.h>
int main()
{
	int i,rem,n,x,fact=1,sum=0,count=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
		rem=n%10;
		{
			for(i=1;i<=rem;i++)
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==x)
	printf("strong number");
	else
	printf("not a strong number");
	return 0;
}
