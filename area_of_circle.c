// #include <stdio.h>

// calculate area of a circle
// formula area = 3.14 x (r)^2

// float area_of_circle(){
//   float radius, area;

//   printf("Enter the radius\n");
//   scanf("%f", &radius);

//   area = 3.14 * radius * radius;

//   printf("Area of circle is %f \n", area);
// }

// int main(){
//   area_of_circle();
// }


// improved version

// include libraries

// define constants

// function prototypes
// return type function name arguments with type

// main function

// other function declaration


#include <stdio.h>

#define PI 3.14159


// fuunction prototype
float area_of_circle(float radius);

// main

int main(){
  float area, radius;
  printf("Enter the radius\n");
  scanf("%f", &radius);

  area = area_of_circle(radius);
  printf("Area is = %f\n", area);
}

float area_of_circle(float radius){
  float area;

  area = PI * radius * radius;

  return area;
}

