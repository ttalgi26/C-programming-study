/*

 [개념 정리 - 부동소수점형과 유효숫자]
 - 컴퓨터는 실수를 부동소수점(floating point) 방식으로 표현 = 소수점이 떠서 움직임
     부호 + 지수 + 가수 (과학적 표기법과 유사, IEEE 754 규격)
 - float  : 4바이트, 유효숫자 약 6~7자리  (1.2E-38 ~ 3.4E38)
 - double : 8바이트, 유효숫자 약 15~16자리 (2.2E-308 ~ 1.8E308)
 - 유효숫자 이후의 값은 부정확함
 - 실수 상수의 기본형은 double, float 상수는 뒤에 f 붙임 (3.14f)
 - %30.25f : 출력 필드 폭 30칸, 소수점 아래 25자리

*/

#include <stdio.h>

int main(void) {
	float fvalue = 1234567890.12345678901234567890;
	double dvalue = 1234567890.12345678901234567890;

	printf("float variable=%30.25f\n", fvalue);	// 약 7자리까지만 정확
	printf("double variable=%30.25lf\n", dvalue);	// 약 16자리까지만 정확

	return 0;
}
