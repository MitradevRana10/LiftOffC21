//1.Input two strings ,concatenate and print it in reverse using loop

#include <stdio.h>
#include <string.h>
int main()
{
  char str1[500],str2[500],strrev[1010];
  int i;
  printf("\nInput 1st string : ");
  gets(str1);
  printf("Input 2nd string : ");
  gets(str2);
  
  strcat(str1,str2); 
  
  printf("\n\nOriginal Concatenate String : ");
  puts(str1);
  printf("\nReverse Concatenate String :  "); 
  for(i=0;i<strlen(str1)+1;i++)
  {
   printf("%c",str1[strlen(str1)-i]);
  }

  return 0; 
} 

