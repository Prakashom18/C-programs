#include <stdio.h>
int main() {
    int i,j,matrix[3][3] = {100,200,300,400,500,600,700,800,900  };

    printf("The 2D matrix with constant values:\n");
    for ( i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

