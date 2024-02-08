#include <stdio.h>
#include "lab1.h"

static int callCount = 0;

void calculateAverage(int num1, int num2) {
    double average = (num1 + num2) / 2.0;
    printf("Average of %d and %d is: %.2f\n", num1, num2, average);
    callCount++;
}

int getCallCount() {
    return callCount;
}