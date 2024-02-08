#include <stdio.h>
unsigned long long int fibonacci(unsigned int n);
int main() {
    unsigned int n;
    printf("Enter the value of n: ");
    scanf("%u", &n);
    unsigned long long int res = fibonacci(n);
    printf("The %u-th Fibonacci number is: %llu\n", n, res);
	unsigned long long int larg = fibonacci(n);
    printf("The largest Fibonacci number that can be printed on this system is: %llu\n", larg);
    
    return 0;
}