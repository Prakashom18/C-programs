#include <stdio.h>

int main() {
    int ages[20];
    int i, count = 0;

    printf("Enter ages of 20 students:\n");
    for (i = 0; i < 20; i++) {
        printf("Enter age for student");
        scanf("%d", &ages[i]);
    }
    printf("\nAges between 20 and 25:\n");
    for (i = 0; i < 20; i++) {
        if (ages[i] >= 20 && ages[i] <= 25) {
            printf("%d\n", ages[i]);
            count++;
        }
    }
    printf("The no. of student betwen 20 and 25 is %d",count);

    return 0;
}

