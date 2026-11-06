/*

 [개념 정리 - double 을 반환하는 함수 (온도 변환)]
 - 반환형 double, 매개변수 double temp_f
 - 섭씨 = 5 * (화씨 - 32) / 9  -> 5.0, 9.0 처럼 실수로 써야 정수 나눗셈 방지
 - 함수 원형 선언 -> main -> 함수 정의 순서

*/

#include <stdio.h>

double FtoC(double temp_f);	// 함수 원형 정의

int main(void) {
	double c, f;

	f = 32.0;
	c = FtoC(f);	// 함수 호출
	printf("Fahrenheit %lf is Celsius %lf. \n", f, c);

	return 0;
}

double FtoC(double temp_f)	// 함수 정의
{
	double temp_c;

	temp_c = (5.0 * (temp_f - 32.0)) / 9.0;
	return temp_c;
}
