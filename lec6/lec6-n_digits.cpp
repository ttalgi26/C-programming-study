/*

 [개념 정리 - 정수의 자릿수 세기]
 - 정수를 10으로 나눌 때마다 한 자리씩 없어짐 (12345 / 10 = 1234)
 - 0이 될 때까지 나눈 횟수 = 자릿수
 - do-while 을 쓰는 이유 : 입력이 0 이어도 1자리로 세야 하므로 최소 1번 실행
 - long long : 64비트 정수 (12자리 이상의 큰 수), 입력은 %lld

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long num;	// 64비트 정수형
	int count = 0;

	printf("Enter an integer: ");
	scanf("%lld", &num);	// long long 타입은 %lld

	do
	{
		count++;
		num /= 10;	// 정수 나눗셈 -> 한 자리 제거
	} while (num != 0);

	printf("Total digits: %d", count);

	return 0;
}
