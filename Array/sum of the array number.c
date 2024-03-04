#include <stdio.h>

int main() {
    int num[5] = {5, 10, 15, 20, 25};
    int i, sum = 0;

    printf("The numbers you entered are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", num[i]);
        sum=sum+ num[i];
    }

    printf("\nThe sum of the numbers is: %d\n", sum);

    return 0;
}

