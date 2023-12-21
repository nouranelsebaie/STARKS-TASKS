#include <stdio.h>

int main() {
    while (1) {
        int number1, number2 ;
        printf("Enter the first number: ");
        scanf("%d", &number1);    
        printf("Enter the second number: ");
        scanf("%d", &number2);
        int sum = number1 + number2;
        printf("The summasition of %d and %d is %d:\n", number1, number2, sum);
    }  
    return 0;
}