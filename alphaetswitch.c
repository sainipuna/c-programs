#include<stdio.h>
int main()
{
	char ch;
	printf("enetr an alphabet\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':printf("it is a vowel");
	    case 'e':
	    case 'i':
	    case 'o':
	    case 'u':
	    	     break;
	    default:printf("it is a consonent");	         
	}
	return 0;
}
