/*

 [개념 정리 - 라이브러리 함수 (수학 함수 <math.h>)]
 - 라이브러리 함수 : 컴파일러에서 제공하는 함수
     표준 입출력, 수학 연산, 문자열 처리, 시간 처리, 오류 처리, 데이터 검색과 정렬
 - 수학 함수는 모두 double 을 받아서 double 을 반환
     sin(x), cos(x), tan(x)  삼각함수 (라디안 단위)
     exp(x)    e^x           exp(10.0)   = 22026.5
     log(x)    ln x (밑 e)   log(10.0)   = 2.30259
     log10(x)  밑 10 로그    log10(100.0) = 2.0
     ceil(x)   x보다 작지 않은 가장 작은 정수 (올림)   ceil(3.8)  = 4.0
     floor(x)  x보다 크지 않은 가장 큰 정수 (내림)    floor(3.8) = 3.0
     fabs(x)   절대값        fabs(-3.67) = 3.67
     pow(x, y) x^y           pow(3.0, 2.0) = 9.0
     sqrt(x)   제곱근        sqrt(4.0)   = 2.0
 - 음수에서 주의 : ceil(-3.8) = -3.0,  floor(-3.8) = -4.0

*/

#include <stdio.h>
#include <math.h>

int main(void) {
	printf("sin(3.14/2.0) = %lf\n", sin(3.14 / 2.0));
	printf("cos(3.14/2.0) = %lf\n", cos(3.14 / 2.0));
	printf("tan(0.5)      = %lf\n", tan(0.5));
	printf("exp(10.0)     = %lf\n", exp(10.0));
	printf("log(10.0)     = %lf\n", log(10.0));
	printf("log10(100.0)  = %lf\n", log10(100.0));
	printf("ceil(3.8)     = %lf\n", ceil(3.8));
	printf("floor(3.8)    = %lf\n", floor(3.8));
	printf("fabs(-3.67)   = %lf\n", fabs(-3.67));
	printf("pow(3.0, 2.0) = %lf\n", pow(3.0, 2.0));
	printf("sqrt(4.0)     = %lf\n", sqrt(4.0));

	return 0;
}
