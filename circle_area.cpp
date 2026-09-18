#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI  3.141592

int main(void) {
  double radius;
  double area;

  printf("Enter circle raduius: ");
  scanf("%lf",&radius);

  area = PI * radius * radius;
  printf("Cirecle area: %f\n",area);
  return 0;
}
