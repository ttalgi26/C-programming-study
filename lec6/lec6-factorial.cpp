/*

 [개념 정리 - 팩토리얼 (for 버전)]
 - fact 는 1로 초기화 (곱셈 누적)
 - n = 5 일 때 진행
     i=1 fact=1 / i=2 fact=2 / i=3 fact=6 / i=4 fact=24 / i=5 fact=120
 - int 는 12! 까지만 정확 (13! 부터 오버플로우) -> 더 크면 long long 사용
 - lec6-factorial0 (while 버전) 과 비교해 볼 것

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int fact = 1;	// 곱셈 누적 -> 1로 초기화
	int i, n;

	printf("Enter an integer: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		fact = fact * i;

	printf("%d! is %d.\n", n, fact);

	return 0;
}
