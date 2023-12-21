#include <stdio.h>

int main() {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);
    int totalSum = 0;
    for (int i = 1; i <= N; i++) {
        int temp = i;
        int sumOfDigits = 0;    
        while (temp > 0) {
            sumOfDigits += temp%10;
            temp /= 10;
        } 
        if (sumOfDigits >= A && sumOfDigits <= B) {
            totalSum += i;
        }
    }
    printf("%d\n", totalSum);

    return 0;
}