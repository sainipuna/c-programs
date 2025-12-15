#include <stdio.h>
int add (int a, int b)
{
int c;
c = a + b;
return c;
}
int main()
{
int x, y, result;
printf ("Enter two values:\n");
scanf ("%d%d", &x, &y);
result = add (x, y);
printf("The result = %d\n", result);
return 0;
}