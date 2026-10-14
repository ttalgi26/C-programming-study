/*

 [개념 정리 - 나머지 연산자로 짝수/홀수 판별]
 - number % 2 == 0 이면 짝수, 아니면 홀수
 - if 두 개(if (n%2==0) ... if (n%2==1) ...) 보다 if-else 하나가 더 효율적
     -> if-else는 조건을 한 번만 검사함
 - == (비교) 와 = (대입) 헷갈리지 말 것!!

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number;
	printf("Enter number: ");
	scanf("%d", &number);

	if (number%2==0)	// 2로 나눈 나머지가 0이면 짝수
		printf("The entered integer is even.\n");
	else	// 그렇지 않으면 홀수
		printf("The entered integer is odd.\n");

	return 0;
}
