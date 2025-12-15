#include<stdio.h>
int main()
{
	int a,b;
	printf("eneter the values of a and b\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value of a:%d,the value of b:%d");
	return 0;
}
