#include<stdio.h>
int main()
{
	float BP,TA,DA,GS;
	printf("enter the values of BP\n");
	scanf("%f",&BP);
	TA=(10*BP)/100;
	DA=(15*BP)/100;
	GS=BP+TA+DA;
	printf("the gross salary of employee=%f",GS);
	return 0;
}
