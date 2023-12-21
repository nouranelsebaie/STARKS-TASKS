#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int currentNumber = 1;
    int currentLine = 1;

    while (currentLine <= N) {
        printf("%d %d %d PUM\n", currentNumber, currentNumber + 1, currentNumber + 2);
        currentNumber += 4;
        currentLine++;
    }

    return 0;
}