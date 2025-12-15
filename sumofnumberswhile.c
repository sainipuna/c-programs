#include<stdio.h>
int main()
{
	int sum=0,i=1,n;
	printf("enetr the value of n\n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
		printf("%d\n",sum);
	}
	return 0;
}
