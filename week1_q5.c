#include <stdio.h>
int main()
{

  float radius;
  printf("Finding diameter,circumference and area of a circle\n\n\n");
  printf("Enter the radius of the circle : ");
  scanf("%f",&radius);

  printf("\nDiameter : %f",2*radius);
  printf("\nCircumference : %f",2*3.14*radius);
  printf("\nArea : %f",3.14*radius*radius);

  return 0;
}
