#include<stdio.h>
int main()
{
	int a,b,c;
	printf("eneter the values of a and b\n");
	scanf("%d%d",&a,&b);
	c=a;
	b=c;
	a=b;
	printf("the value of a:%d,the value of b:%d");
	return 0;
}
