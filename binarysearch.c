#include <stdio.h>
int main() {
    int a[100], n, i, high, low, mid, key, array_size;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter key value to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (key == a[mid]) {
            printf("%d found at %d position", key, mid + 1);
            break;
        } else if (key > a[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (low > high) {
        printf("Sorry! %d not found", key);
    }
    return 0;
}