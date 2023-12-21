#include <stdio.h>

int main() {
    int theID = 1234;
    int password = 5678;
	int enterdID=0;
	int enteredPassword=0 ;
	int i=0;
    
   
        printf("Enter your ID: \n");
        scanf("%d",&enterdID);
        if (enterdID == theID)
			{
          for(int i=0;i<3;i++) 
			{
                printf("Enter your password: ");
                scanf("%d",&enteredPassword);
                
                if (enteredPassword == password ) 
				{
                    printf("Welcome!\n");
					break;
                } 
				else if(i==2)
				{
					
				   printf("No more tries.\n");
			
				}
				else 
				{
                
                    printf("Incorrect password. Please try again.\n");
                }
				
            }
			
         
        } 
		else 
		{
            printf("You are not registered.\n");
        }
   
    
    return 0;
}