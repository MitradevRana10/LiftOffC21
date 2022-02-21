//3.Swap first and last digit of an integer

#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
 int N,M,l,arr[15],arrN[15],i,count=0;
 printf("Enter an integer : ");
 scanf("%d",&N);
 M=N;
 while(N>10){
  arr[count]=N%10;
  N/=10;
  count++;
 }
arr[count]=M/pow(10,count);

l=M%10;
arr[0]=M/pow(10,count);
arr[count]=l;

printf("\n\nRequired swapped no. : ");
for(i=0;i<count+1;i++)
{
 printf("%d",arr[count-i]);
}
 return 0;
}
