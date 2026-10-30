/*

 [개념 정리 - 참/거짓을 반환하는 함수]
 - check_prime(n) : 소수이면 1, 아니면 0 을 반환
 - 원형에서 매개변수 이름 생략 가능 : int check_prime(int);
 - 반환값을 바로 조건식에 사용 : if (check_prime(k) == 1)
 - 6장 get_prime 의 안쪽 반복문을 함수로 분리한 것 -> 다른 곳에서도 재사용 가능 (lec9-prime_sum)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_prime(int);	// 함수 원형 (매개변수 이름 생략)

int main(void) {
	int k;

	printf("Enter an integer: ");
	scanf("%d", &k);

	if (check_prime(k) == 1) printf("Prime number. \n");
	else printf("Not a prime number. \n");

	return 0;
}

int check_prime(int n)
{
	int is_prime = 1;	// 일단 소수라고 가정한다.

	for (int i = 2; i < n; ++i) {
		if (n % i == 0) {	// 나누어 떨어지면 소수 아님
			is_prime = 0;
			break;
		}
	}
	return is_prime;
}
