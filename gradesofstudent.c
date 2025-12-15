#include<stdio.h>
int main()
{
	int p;
	printf("enetr the value of p\n");
	scanf("%d",&p);
	if(p>=90)
	printf("grade A");
	else if((p<90)&&(p>=80))
	printf("grade B");
	else if((p<80)&&(p>=70))
	printf("grade C");
	else if((p<70)&&(p>=60))
	printf("grade D");
	else if((p<60)&&(p>=50))
	printf("grade E");
	else 
	printf("Fail");
	return 0;
}
