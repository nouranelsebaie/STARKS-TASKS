
#include <stdio.h>
int reverseDigits(int number) ;
int main() {
    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    int reversed = reverseDigits(number);

    printf("Reversed number: %d\n", reversed);

    return 0;
}