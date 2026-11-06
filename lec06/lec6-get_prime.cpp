/*

 [개념 정리 - 소수 찾기 (중첩 반복 + break)]
 - 소수 : 1과 자기 자신으로만 나누어 떨어지는 수 (2, 3, 5, 7, 11 ...)
 - 바깥 for (i) : 2 ~ n 까지 검사할 수
 - 안쪽 for (k) : 2 ~ i-1 로 나눠봄 -> 하나라도 나누어 떨어지면 소수 아님
 - is_prime : 플래그(flag) 변수, 1이면 소수 / 0이면 소수 아님
 - break : 약수를 하나 찾으면 더 검사할 필요 없음 -> 안쪽 반복문만 탈출

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, is_prime;

	printf("Find primes up to: ");
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		is_prime = 1;	// 일단 소수라고 가정
		for (int k = 2; k < i; k++) {
			if (i % k == 0) {	// 나누어 떨어지면
				is_prime = 0;	// 소수 아님
				break;	// 안쪽 for 만 탈출
			}
		}
		if (is_prime == 1)
			printf("%d, ", i);
	}
	printf("\n\n");

	return 0;
}
