//4.Fibonacci Series

#include <stdio.h>
int main()
{
 int N,i,num1=0,num2=1,numNext;
 printf("Enter the no. of values you want in our Fibonacci Series : ");
 scanf("%d",&N);
 
 printf("\n\nFibonacci Series : ");
 for(i=0;i<N;i++){
 	
   printf("%d",num1);
   
   if(i==N-1){break;}
   printf("+");
   
   numNext=num1+num2;
   num1=num2;
   num2=numNext;
 }

 return 0;
}
