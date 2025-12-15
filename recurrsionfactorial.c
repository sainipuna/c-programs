#include <stdio.h>
int factorial (int n)
{
if (n == 1)
return 1;
else
return n * factorial (n-1);
}
int main()
{
int n, fact;
printf("Enter a number: ");
scanf ("%d", &n);
printf ("fact = %d", factorial(n));
return 0;
}