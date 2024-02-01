#include<stdio.h>
void decimalToBinary(int number) 
{
    int binary[32];
    int i=0;
    while (number>0) 
    {
        binary[i]=number%2;
        number=number/2;
        i++;
    }
    printf("Binary number is : ");
    for (int j=i-1;j>=0;j--) 
        {
        printf("%d",binary[j]);
        }
      printf("\n");
}