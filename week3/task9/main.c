#include <stdio.h>
#include "main.h"
#include "lab1.h"

int main() {
    int num1, num2;
	char continu;
   do{
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    calculateAverage(num1, num2);
	printf("if you want To calculate again enter 'c'  character or if  you want to finish enter another character : ");
		scanf(" %c", &continu);
	} while(continu == 'c');
   

    int count = getCallCount();
    printf("Number of function calls: %d\n", count);

    return 0;
}