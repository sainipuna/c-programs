#include<stdio.h>
int main()
{
	float P,T,R,SI;
	printf("enter the values of P,T and r\n");
	scanf("%f%f%f",&P,&T,&R);
	SI=(P*T*R)/100;
	printf("the simple interest of the amount=%f",SI);
	return 0;
}
