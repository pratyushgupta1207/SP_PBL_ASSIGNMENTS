#include <stdio.h>

int main() {
    int num1, num2, sum, difference, product;
    float division;

    printf("Enter num1-");
    scanf("%d", &num1);

    printf("Enter num2-");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The sum of num1 and num2 is %d\n", sum);

    difference = num1 - num2;
    printf("The difference between num1 and num2 is %d\n", difference);

    product = num1 * num2;
    printf("The product of num1 and num2 is %d\n",product);
    
    division=num1/num2;
    printf("The division between of num1 and num2 is %.2f\n",division);
    
    if(num2==0){
    printf("The division between num1 and num2 is not possible");
    }
    else {
        printf("The division is possible");
    }

    return 0;
}
