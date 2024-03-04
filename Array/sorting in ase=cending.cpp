#include <stdio.h>

int main() {
    int n, i, j, t,num[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter number");
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i+1; j < n; j++) {
            if (num[i] > num[j]) {
                t = num[i];
                num[i] = num[j];
                num[j] = t;
            }
        }
    }
    printf("\nNumbers in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}

