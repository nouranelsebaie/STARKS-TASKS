#include <stdio.h>



void main(void)
{
	int x,y;
	printf("enter the first number :\n");
	    scanf("%d",&x);
		fflush(stdin);
	printf("enter the second number :\n");
		scanf("%d",&y);
		
	int add = x+y;
	int sub = x-y;
	int mul = x*y;
	float div = x/y;
	printf("Addition is  x+y = %d \n",add);
	printf("subtraction is  x-y = %d \n",sub);
	printf("multiplication is  x*y = %d\n ",mul);
	printf("division is  x/y = %f\n",div);
}
