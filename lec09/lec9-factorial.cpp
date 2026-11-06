/*

 [개념 정리 - 순환 호출(recursion)] (시험 단골)
 - 순환 : 함수가 자기 자신을 호출하여 문제를 해결하는 기법
 - 반드시 "멈추는 조건(기저 사례)" 이 있어야 함 -> 없으면 무한 호출 (스택 오버플로우)
     if (n <= 1) return 1;                 <- 멈추는 조건
     else return n * factorial(n - 1);     <- 자기 자신 호출 (문제 크기를 줄여서)
 - factorial(5) 계산 과정
     factorial(5) = 5 * factorial(4)
                  = 5 * 4 * factorial(3)
                  = 5 * 4 * 3 * factorial(2)
                  = 5 * 4 * 3 * 2 * factorial(1)
                  = 5 * 4 * 3 * 2 * 1 = 120
   호출은 5 -> 4 -> 3 -> 2 -> 1 순서, 계산(반환)은 1 -> 2 -> 3 -> 4 -> 5 역순
 - 6장 반복문 버전(lec6-factorial)과 비교

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);	// 함수 원형

int main(void) {
	int x = 0, result;

	printf("Enter an integer: ");
	scanf("%d", &x);

	result = factorial(x);
	printf("%d! is %d.\n", x, result);

	return 0;
}

int factorial(int n)
{
	printf("factorial(%d)\n", n);	// 호출 순서 확인용

	if (n <= 1) return 1;	// 멈추는 조건
	else return n * factorial(n - 1);	// 순환 호출
}
