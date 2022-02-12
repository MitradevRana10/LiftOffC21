#include <stdio.h>
int main()
{

  int num,rem;
  printf("Check whether a no. is EVEN OR ODD\n\n\n");
  printf(" Enter a no. : ");
  scanf("%d", &num);

  rem=num%2;

  switch(rem) {
      
     case 0:
        printf(" The no. is even.");
        break;

     case 1:
        printf(" The no. is odd.");
        break;

     default:
        printf("Error");
        break;
    
  }
 
  return 0;
}
