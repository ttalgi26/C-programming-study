/*

 [개념 정리 - 수식 계산]
 - y = 3x^2 + 7x + 9 에서 x = 2 일 때 값 계산 -> 3*4 + 14 + 9 = 35
 - C에는 거듭제곱 연산자(^)가 없음!! (^는 비트 XOR)
     -> x*x 처럼 직접 곱하거나 pow(x, 2) 사용 (<math.h>)
 - 곱셈 기호 * 생략 불가 (3x X, 3*x O)

*/

#include <stdio.h>

int main(void) {
	double x = 2.0;
	double y;

	y = 3.0 * x * x + 7.0 * x + 9.0;	// x^2 대신 x*x
	printf("y=3.0*x*x + 7.0*x + 9.0=%f \n", y);

	return 0;
}
