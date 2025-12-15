#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("enetr a character\n");
	scanf("%c",&ch);
	printf("enter values of a and b\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("the value of sum=%d",c);
	switch(ch)
	{
		case '+':c=a+b;
		  printf("sum:%d",c);
		  break;
	    case '-':c=a-b;
	      printf("sub:%d",c);
	      break;
	    case '*':c=a*b;
	      printf("mul:%d",c);
	      break;
	    case '/':c=a/b;
	      printf("div:%d",c);
	      break;
	}
	return 0;
}
