#include <stdio.h>
int main() {
    int n, i, x, num[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
	   printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter arrays");
        scanf("%d", &num[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (num[i] == x) {
            printf("It is in the list");
            break;
        }
        if(x==i)
        printf("%d is not present in the list.");
    }
    
    return 0;
    }

  

