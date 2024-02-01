#include <stdio.h>
int qualityPoints(int average);
int main() {
    int average;

    printf("Enter the student's average: ");
    scanf("%d", &average);

    int points = qualityPoints(average);

    printf("Quality Points: %d\n", points);

    return 0;
}