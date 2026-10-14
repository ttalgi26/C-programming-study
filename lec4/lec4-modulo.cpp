/*

 [개념 정리 - 나머지 연산자 %]
 - 첫 번째 피연산자를 두 번째 피연산자로 나눈 나머지 (13 % 3 = 1)
 - 활용 (시험 단골)
     x % 2 == 0  -> 짝수
     x % 5 == 0  -> 5의 배수
     초 -> 분, 초 변환 : 분 = 초 / 60,  초 = 초 % 60

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEC_PER_MINUTE 60	// 1분은 60초

int main(void) {
	int input, minute, second;

	printf("Enter time in seconds (up to 3.2 billion): ");
	scanf("%d", &input);	// 초 단위 시간

	minute = input / SEC_PER_MINUTE;	// 몫 -> 몇 분
	second = input % SEC_PER_MINUTE;	// 나머지 -> 몇 초

	printf("%d seconds = %d minutes %d seconds. \n", input, minute, second);

	return 0;
}
