#include <stdio.h>
int perfect(int number);
int main() {
    int num;
	do {
		printf(" Enter the number to check : ");
		scanf("%d", &num);
	} while(num <= 0);

	if(perfect(num))
		printf("This is a perfect number\n");
	else
		printf("This is not a perfect number\n");
    printf("Perfect numbers between 1 and 100:\n");

    for (int i = 1; i <= 100; i++) {
        if (perfect(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}