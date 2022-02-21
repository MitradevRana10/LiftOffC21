//2.Input 10 integers and find sum of odd and even no.s separately

#include <stdio.h>
int main()
{
  int A[10],sumO=0,sumE=0;
  int i;
  printf("Enter 10 integers : ");
  for(i=0;i<10;i++)
  {
   scanf("%d",&A[i]);
  } 

  for(i=0;i<10;i++)
  {
   if(A[i]%2==0)
   {sumE=sumE+A[i];}
   else
   {sumO=sumO+A[i];}
  }

  printf("\n\nSum of Odd no.s : %d",sumO);
  printf("\n\nSum of Even no.s : %d",sumE);

  return 0;
}

