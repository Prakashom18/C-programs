#include <stdio.h>

int main() {
    int matrix[3][3],i,j;

    printf("Enter %d elements for the 3x3 matrix:\n", 3 * 3);
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Enter element");
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The 2D matrix with entered values:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

