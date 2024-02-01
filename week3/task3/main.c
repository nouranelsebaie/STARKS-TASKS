#include<stdio.h>
void decimalToBinary(int number);
int main() {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d",&decimalNumber);
    decimalToBinary(decimalNumber);

    return 0;
}