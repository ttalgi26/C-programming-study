/*

 [개념 정리 - 피보나치 수열 (순환 버전)]
 - 교재 슬라이드 제목에 (X) 표시가 있음 -> 수업에서 제외된 내용일 수 있음
 - 피보나치 수열 정의
     fib(0) = 0
     fib(1) = 1
     fib(n) = fib(n-1) + fib(n-2)   (n >= 2)
     0 1 1 2 3 5 8 13 21 34 ...
 - 멈추는 조건이 2개 (n == 0, n == 1)
 - 한 번 호출에 자기 자신을 2번 호출 -> 같은 값을 여러 번 다시 계산해서 n 이 커지면 매우 느림

*/

#include <stdio.h>

int fibbonacci(int n)
{
	if (n == 0) {	// 멈추는 조건 1
		return 0;
	}
	else if (n == 1) {	// 멈추는 조건 2
		return 1;
	}
	else {
		return (fibbonacci(n - 1) + fibbonacci(n - 2));	// 순환 호출 2번
	}
}

int main(void) {
	for (int i = 0; i < 10; i++) {
		printf("%d ", fibbonacci(i));	// 0 1 1 2 3 5 8 13 21 34
	}

	return 0;
}
