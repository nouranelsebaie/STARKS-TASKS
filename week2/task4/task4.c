#include <stdio.h>

int main() {
    int V, A, B, C;
    scanf("%d %d %d %d", &V, &A, &B, &C);
    int currentPerson = 0;
    while (V > 0) {
        if (currentPerson == 0)
            V -= A;
        else if (currentPerson == 1)
            V -= B;
        else
            V -= C;
        currentPerson = (currentPerson + 1) % 3;
    }
    if (currentPerson == 0) {
        printf("F\n");
    } else if (currentPerson == 1) {
        printf("M\n");
    } else {
        printf("T\n");
    }
    return 0;
}