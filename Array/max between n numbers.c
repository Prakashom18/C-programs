#include <stdio.h>

int main() {
    int n, num[100],i, max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter array");
        scanf("%d", &num[i]);
    }
    max = num[0];
    for (i = 1; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
}
    printf("The largest number is: %d\n", max);

    return 0;
}

