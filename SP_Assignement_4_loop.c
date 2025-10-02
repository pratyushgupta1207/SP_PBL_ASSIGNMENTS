#include <stdio.h>

int main() {
    int num, i;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial of negative number is not defined.\n");
    } else {
        for(i = 1; i <= num; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d is: %d\n", num, fact);
    }

    return 0;
}