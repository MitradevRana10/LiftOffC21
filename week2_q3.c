//3.Swap first and last digit of an integer (Unable to do)

#include <stdio.h>
#include <math.h>
int main()
{
 int rep1=0,rep2=0,div=0,count=0;
 int i,j;
 int arr[20];
 long long SI;
 printf("Enter an integer(Max 15 digits) : ");
 scanf("%d",&SI);
 
 if(SI>=-9 && SI<9)
 {printf("\n\nNo swapping as it is a single digit.");}

 else{
 rep1=SI%10;
 arr[0]=rep1;
   for(i=0;i<15;i++)
   {
    div=SI/pow(10,i+1);
    count++;
     if(div!=0){
       rep2=div/pow(10,i);
       arr[i+1]=rep2;
      }
     else{
       break;
      }
   }
  }

 arr[0]=rep2;
 arr[count]=rep1;

 printf("\n\nSwapped no. : ");
 for(j=0;j<count;j++)
 {
  printf("%d",arr[count-j]);
 }
  return 0;
}

