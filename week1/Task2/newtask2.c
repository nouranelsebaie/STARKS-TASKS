#include<stdio.h>


void main()
{
	float n1,n2,s;
	printf("enter two float numbers :\n");
	scanf("%f",&n1);	
	scanf("%f",&n2);
	printf(" first number before swap =%f\n",n1);
	printf(" second number before swap =%f\n",n2);
    s = n2;
	n2 = n1;
	n1 = s;
	printf(" first number after swap =%f\n",n1);
	printf(" second number after swap =%f\n",n2);
	
}