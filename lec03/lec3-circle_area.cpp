/*

 [개념 정리 - 기호 상수 #define, 부동소수점 입출력]
 - #define PI 3.141592 : 기호 상수(symbolic constant) = 상수에 이름을 붙인 것
     장점 : 1) 프로그램 읽기 쉬워짐  2) 값 변경이 쉬움 (한 곳만 고치면 됨)
     #define 문 끝에는 세미콜론 X
 - double 입력은 scanf("%lf") 필수, 출력은 %f / %lf 둘 다 가능
 - 원의 면적 = PI * r * r

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI  3.141592	// 기호 상수

int main(void) {
  double radius;	// 원의 반지름
  double area;	// 원의 면적

  printf("Enter circle raduius: ");
  scanf("%lf",&radius);	// double은 반드시 %lf

  area = PI * radius * radius;
  printf("Cirecle area: %f\n",area);
  return 0;
}
