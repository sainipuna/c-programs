#include<stdio.h>
int main()
{
	int n,sum=0,rem,x;
	printf("enter the value of n\n");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	printf("%d=sum",sum);
	if(x==sum)
	printf("armstrong number");
	else
	printf("not armstrong number");
	return 0;
}
