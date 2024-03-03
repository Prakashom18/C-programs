#include <stdio.h>
int main() {
    int eng, comp, acc, eco, nep;
    int total;
    float percentage;
    printf("Enter marks for 5 subjects out of 100:\n");
    printf("Enter marks for English: ");
    scanf("%d", &eng);
    printf("Enter marks for Computer Science: ");
    scanf("%d", &comp);
    printf("Enter marks for Accountancy: ");
    scanf("%d", &acc);
    printf("Enter marks for Economics: ");
    scanf("%d", &eco);
    printf("Enter marks for Nepali: ");
    scanf("%d", &nep);
    total= eng + comp + acc + eco + nep;
    percentage = (float)total/5;
    printf("\nTotal Marks: %d\n", total);
    printf("Percentage: %f\n", percentage);
    if (eng >= 35 && comp >= 35 && acc >= 35 && eco >= 35 && nep >= 35)
	 {
        if (percentage >= 75) {
            printf("Division: Distinction\n");
        } else if (percentage >= 60) {
            printf("Division: First Division\n");
        } else if (percentage >= 45) {
            printf("Division: Second Division\n");
        } else 
            printf("Division: Third Division\n");
        } 
    else {
        printf("Division: Fail,You have failed one or more subject\n");
    }

    return 0;
}

