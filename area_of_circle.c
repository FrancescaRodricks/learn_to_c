#include <stdio.h>

// calculate area of a circle
// formula area = 3.14 x (r)^2

float area_of_circle(){
  float radius, area;

  printf("Enter the radius\n");
  scanf("%f", &radius);

  area = 3.14 * radius * radius;

  printf("Area of circle is %f \n", area);
}

float main(){
  area_of_circle();
}
