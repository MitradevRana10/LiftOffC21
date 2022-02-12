#include <stdio.h>
int main()
{
  
  float num1,num2;
  printf("Finding maximum of two no.s\n\n\n");
  printf("Enter two no.s : ");
  scanf("%f %f", &num1,&num2);

  if(num1>num2) {
    printf("\nMax : %f",num1);
  }

  else if(num2>num1) {
    printf("\nMax : %f",num2);
  }

  else {
    printf("\nThey are equal.");
  }
   
  return 0;
}

