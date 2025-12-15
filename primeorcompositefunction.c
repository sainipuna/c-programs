#include <stdio.h>
int prime (int n)
{
    int count = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        count++;
    }
    if (count == 2)
    return 1;
    else
    return 0;
}

int main()
{
    int n, result, count = 0;
    printf ("Enter a number: ");
    scanf ("%d", &n);
    if (prime (n))
    {
        printf ("prime");
    }
    else
    {
        printf ("composite");
    }
    return 0;
}