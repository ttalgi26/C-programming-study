/*

 [개념 정리 - 함수 재사용]
 - 정수 n 이 소수 2개의 합으로 표시될 수 있는지 검사
     i 가 소수이고 n - i 도 소수이면 n = i + (n - i)
 - check_prime() 함수를 한 번 만들어 두고 두 번 호출 -> 함수 없이 쓰면 매우 복잡해짐
 - flag 변수 : 한 번이라도 찾았는지 기록 (0 이면 못 찾음)
 - scanf_s : 비주얼 스튜디오의 안전한 입력 함수 (정수 입력은 scanf 와 사용법 같음)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_prime(int n);	// 함수 원형

int main(void) {
	int n, flag = 0;

	printf("Enter a positive integer: ");
	scanf_s("%d", &n);

	for (int i = 2; i < n; i++) {
		if (check_prime(i) == 1) {	// i 가 소수이고
			if (check_prime(n - i) == 1) {	// n - i 도 소수이면
				printf("%d = %d + %d\n", n, i, n - i);
				flag = 1;
			}
		}
	}
	if (flag == 0)
		printf("%d cannot be expressed as the sum of prime numbers.\n", n);

	return 0;
}

int check_prime(int n)
{
	int is_prime = 1;	// 일단 소수라고 가정한다.

	for (int i = 2; i < n; ++i) {
		if (n % i == 0) {
			is_prime = 0;
			break;
		}
	}
	return is_prime;
}
