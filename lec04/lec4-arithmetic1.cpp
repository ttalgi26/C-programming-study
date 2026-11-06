/*

 [개념 정리 - 수식과 산술 연산자]
 - 수식(expression) : 상수, 변수, 연산자의 조합 -> 연산자와 피연산자로 나뉨, 결과값을 가짐
     ex) y = 10 + 20;  연산자 : =, +   피연산자 : y, 10, 20
 - 산술 연산자 : + - * / %
 - 정수 / 정수 -> 소수점 이하 버림 (7 / 4 = 1)
 - % (나머지 연산자) : 정수에만 사용 가능 (7 % 4 = 3)
 - printf에서 % 문자 자체를 출력하려면 %% 로 써야 함

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, result;

	printf("Enter two integers: ");
	scanf("%d %d", &x, &y);

	result = x + y;	// 덧셈
	printf("%d + %d = %d\n", x, y, result);
	result = x - y;	// 뺄셈
	printf("%d - %d = %d\n", x, y, result);
	result = x * y;	// 곱셈
	printf("%d * %d = %d\n", x, y, result);
	result = x / y;	// 나눗셈 (몫)
	printf("%d / %d = %d\n", x, y, result);
	result = x % y;	// 나머지
	printf("%d %% %d = %d\n", x, y, result);	// %% -> % 출력

	return 0;
}
