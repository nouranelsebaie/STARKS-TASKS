#include <stdio.h>


void main(void)
{ 
int x;
float y;
char z;
printf("please enter integer value :\n");
scanf("%d",&x);
//fflush(stdin);
printf("please enter float value : \n");
scanf("%f",&y);
//fflush(stdin);
printf("please enter character  : \n");
scanf("  %c",&z);
fflush(stdin);
printf("intger value is :%d\n",x);
printf("float value is :%f\n",y);
printf("char  value is :%c",z);


	
}
