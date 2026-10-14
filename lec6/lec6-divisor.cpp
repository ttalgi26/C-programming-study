/*

 [개념 정리 - 약수 구하기]
 - 1 부터 num 까지 i 를 증가시키면서 num % i == 0 이면 i 는 num 의 약수
 - 반복문 + 조건문 + 나머지 연산자 조합
 - ex) 36 -> 1 2 3 4 6 9 12 18 36

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, i = 1;

	printf("Enter an integer:");
	scanf("%d", &num);

	while (i <= num) {
		if (num % i == 0)	// 나누어 떨어지면 약수
			printf("%d ", i);
		i++;
	}
	printf("\n\n");

	return 0;
}
