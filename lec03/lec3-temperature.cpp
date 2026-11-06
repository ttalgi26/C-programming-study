/*

 [개념 정리 - 실수 연산]
 - 섭씨 = (화씨 - 32) * 5 / 9
 - 주의!! 5 / 9 처럼 정수끼리 나누면 0이 됨 -> 반드시 5.0 / 9.0 처럼 실수로 써야 함
 - double 입력은 %lf

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double celsius, fahrenheit;	// 같은 자료형은 한 줄에 여러 개 선언 가능

	printf("Fahrenheit temperature=");
	scanf("%lf", &fahrenheit);	//부동소수점형으로 입력받는다.

	celsius = (fahrenheit - 32.0) * 5.0 / 9.0;	// 5/9 로 쓰면 정수 나눗셈 -> 0
	printf("Celsius temperature=%lf\n", celsius);

	return 0;
}
