/*

 [개념 정리 - 이차 방정식의 근 (판별식으로 분기)]
 - ax^2 + bx + c = 0 의 판별식 D = b^2 - 4ac
     D > 0 : 서로 다른 두 실근  x = (-b ± sqrt(D)) / 2a
     D = 0 : 중근               x = -b / 2a
     D < 0 : 허근 (실근 없음)
 - sqrt() : 제곱근 함수 (<math.h> 필요), double 반환
 - 2.0 * a 처럼 실수로 써야 정수 나눗셈이 안 됨

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>	// sqrt() 사용

int main(void) {
	int a, b, c;
	double d, x1, x2;

	printf("Enter coefficients a, b, and c: ");
	scanf("%d%d%d", &a, &b, &c);

	d = b * b - 4.0 * a * c;	// 판별식

	if (d == 0) {	// 중근
		x1 = -b / (2.0 * a);
		printf("Double root = %f\n", x1);
	}
	else if (d > 0) {	// 서로 다른 두 실근
		x1 = (-b + sqrt(d)) / (2.0 * a);
		x2 = (-b - sqrt(d)) / (2.0 * a);
		printf("First real root = %f\n", x1);
		printf("Second real root = %f\n", x2);
	}
	else	// 허근
		printf("The roots are imaginary.\n");

	return 0;
}
