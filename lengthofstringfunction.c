#include <stdio.h>

int length(char st[]) {
    int i, len = 0;
    for (i = 0; st[i] != '\0'; i++) {
        len++;
    }
    return len;
}

int main() {
    char st[30];
    printf("Enter the elements: ");
    gets(st);
    printf("Length of %s is %d\n", st, length(st));
    return 0;
}