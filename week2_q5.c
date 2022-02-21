//5.2*2 Sum And Product

#include <stdio.h>
int main()
{
  int C[2][2];
  int m,n,l;
  int i,j,k;
  int A[2][2]={{1,2},{3,4}};
  int B[2][2]={{4,3},{2,1}};

  printf("A =    ");
  for(i=0;i<2;i++){
   for(j=0;j<2;j++){
     printf("%d  ",A[i][j]);
    }
   printf("\n       ");
  }

  printf("\nB =    ");
  for(i=0;i<2;i++){
   for(j=0;j<2;j++){
     printf("%d  ",B[i][j]);
    }
   printf("\n       ");
  }

  //Addition

  printf("\nA + B =   ");
  for(i=0;i<2;i++){
   for(j=0;j<2;j++){
     printf("%d  ",A[i][j]+B[i][j]);
    }
   printf("\n          ");
  }
  
 //Multiplication

  for(i=0;i<2;i++){
   for(j=0;j<2;j++){
   	 C[i][j]=0;
     for(k=0;k<2;k++){
        C[i][j]+=A[i][k]*B[k][j];
      }
    }
  }

  printf("\nA * B =    ");
  for(i=0;i<2;i++){
   for(j=0;j<2;j++){
     printf("%d  ",C[i][j]);
    }
   printf("\n          ");
  }
 return 0;
}
