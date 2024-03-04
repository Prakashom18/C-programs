#include <stdio.h>

int main() {
    int m, n,i,j, a[5][5],b[5][5],s[5][5], d[5][5];
    
    printf("Enter the number of rows and columns for the matrices: \n");
    scanf("%d %d", &m, &n);

    printf("Enter elements for the first  matrix\n");
    for ( i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element\n ");
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for the second  matrix ");
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            printf("Enter element\n ");
            scanf("%d", &b[i][j]);
        }
    
    }

    printf("The sum of matrices \n");

    for (i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            s[i][j] = a[i][j] + b[i][j];
               printf("%d \t", s[i][j]);
           
        }
            printf("\n");    }

     printf("The difference of matrices\n");
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
        	 d[i][j] = a[i][j] - b[i][j];
        	    printf("%d\t ", d[i][j]);
         
        }
        printf("\n");
    }

    return 0;
}

