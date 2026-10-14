/*

 [개념 정리 - 실수 나눗셈]
 - 정수 / 정수 = 정수 (7 / 4 = 1)
 - 실수 / 실수 = 실수 (7.0 / 4.0 = 1.75)
 - double 입력은 %lf
 - 실수에는 % (나머지) 연산자 사용 불가 -> 컴파일 에러

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double x, y, result;

	printf("Enter two real numbers: ");
	scanf("%lf %lf", &x, &y);	// double형은 %lf

	result = x + y;	// 덧셈
	printf("%lf + %lf = %lf\n", x, y, result);
	result = x - y;	// 뺄셈
	printf("%lf - %lf = %lf\n", x, y, result);
	result = x * y;	// 곱셈
	printf("%lf * %lf = %lf\n", x, y, result);
	result = x / y;	// 나눗셈 (소수점까지 계산됨)
	printf("%lf / %lf = %lf\n", x, y, result);

	return 0;
}
