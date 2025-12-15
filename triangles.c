#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values three sides\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a==b)&&(b==c)&&(c==a))
	printf("equilateral triangle");
	else if((a==b)||(b==c)||(c==a))
	printf("isocelus traingle");
	else
	printf("scalene triangle");
	return 0;
}
