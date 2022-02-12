#include <stdio.h>
int main()
{
  char name[50];
  int regdno;
  char branch[50];
  char hobbies[200];
  
 //INPUT
   printf("1.");
   printf("Enter your Name : ");
   scanf("%s",&name);

   printf("\n2.");
   printf("Enter your Regd No.(Last 3 digits) : ");
   scanf("%d",&regdno);

   printf("\n3.");
   printf("Enter branch : ");
   scanf("%s",&branch);

   printf("\n4.");
   printf("Enter your hobbies : ");
   scanf("%s",&hobbies);



 //OUTPUT

   printf("\n\n\nYOUR DETAILS : ");
  
   printf("\n1.Name : %s",&name);
   
   printf("\n2.Registration No. : %d",regdno);
   
   printf("\n3.Branch : %s",&branch);
   
   printf("\n4.Hobbies : %s",&hobbies);

   
   return 0; 

}

