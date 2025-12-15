#include <stdio.h>

int reversenumber(int n) {
    int temp, reversed = 0, rem;
    temp = n; // Store original number
    while (n > 0) {
        rem = n % 10;
        reversed = (reversed * 10) + rem;
        n = n / 10;
    }
    return reversed;
}

int main() {
    int n, result;
    printf("Enter n value: ");
    scanf("%d", &n);
    result = reversenumber(n);

    if (result == n) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
    return 0;
}