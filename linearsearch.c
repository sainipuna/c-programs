#include <stdio.h>

int linear_search(int n, int a, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (key == a[i])
            return i;
    }
    return -1;
}

int main() {
    int x[10];
    int m, s, i;
    printf("Enter array size:");
    scanf("%d", &m);
    printf("Enter array elements:");
    for (i = 0; i < m; i++) {
        scanf("%d", &x[i]);
    }
    printf("Enter a number to search:");
    scanf("%d", &s);

    if (linear_search(m, x, s) == -1)
        printf("element not found");
    else
        printf("%d found at %d position", s, linear_search(m, x, s));

    return 0;
}