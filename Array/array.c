#include <stdio.h>

int main() {
    int num[5];
    int i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    printf("\nYou entered the following numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}

