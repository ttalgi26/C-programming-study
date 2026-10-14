/*

 [개념 정리 - 유효한 삼각형 검사]
 - 삼각형 조건 : 어떤 두 변의 합이든 나머지 한 변보다 커야 함
     (a + b > c) && (b + c > a) && (a + c > b)
 - scanf("%d%d%d") : 공백 없이 써도 공백/엔터로 구분해서 입력 가능
 - 단축 연산 : && 에서 앞의 조건이 거짓이면 뒤는 계산하지 않음

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a, b, c;

	printf("Enter three sides of a triangle: ");
	scanf("%d%d%d", &a, &b, &c);

	if ((a + b > c) && (b + c > a) && (a + c > b))	// 세 조건 모두 참이어야 함
		printf("Valid triangle.\n");
	else
		printf("Not a valid triangle.\n");

	return 0;
}
