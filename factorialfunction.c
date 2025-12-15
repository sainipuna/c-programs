#include <stdio.h>
int fact (int a)
{
int i, f=1;
for (i=1; i <=a; i++)
{
f=f*i;
}
return f;
}
int main()
{
int a;
printf ("Enter a number:\n");
scanf ("%d",&a);
printf ("fact = %d", fact (a));
return 0;
}