#include <stdio.h>

int reverse_number(int n)
{
    int reversed = 0, rem;
    while (n > 0) {
        rem = n % 10;
        reversed = (reversed * 10) + rem;
        n = n / 10;
    }
    return reversed;
}

int main()
{
    int n, result;
    printf("Enter n value: ");
    scanf("%d", &n);
    result = reverse_number(n);
    printf("Result = %d\n", result);
    return 0;
}