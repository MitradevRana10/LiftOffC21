#include <stdio.h>
int main()
{
  
  float num1,num2;
  int choice; 
  
  printf("Arithmetic Operations between 2 no.s.\n\n\n");
  printf("Enter two no.s : ");
  scanf("%f %f",&num1,&num2);
  
  printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division");
  printf("\n\nEnter your choice : ");
  scanf("%d",&choice);

  switch(choice) {
   
      case 1: 
         printf("%f + %f = %f",num1,num2,num1+num2);
         break;

      case 2:
         printf("%f - %f = %f",num1,num2,num1-num2);
         break;

      case 3:
         printf("%f * %f = %f",num1,num2,num1*num2);
         break;

      case 4:
         printf("%f / %f = %f",num1,num2,num1/num2);
         break;
 
      default:
         printf("Error");
         break;
    }

      return 0;
}

