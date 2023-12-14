#include <stdio.h>



void main(void)
{
char x;
printf("enter character: ");
scanf(" %c",&x);
printf("The equivalent ascii code is : %d\n",x);
//printf("The previous : %d\n",--x);
printf("The previous char  : %c\n",--x);
//printf("The next : %d\n",++x);
x++;
printf("The next char : %c\n",++x);

}
