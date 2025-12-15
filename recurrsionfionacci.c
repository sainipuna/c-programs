#include <stdio.h>

int fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int limit, i;

    printf("Enter a limit upto where series to be printed: ");
    scanf("%d", &limit);

    printf("Output: ");
    for (i = 0; i < limit; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");

    return 0;
}