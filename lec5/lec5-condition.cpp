/*

 [개념 정리 - 조건 연산자 (삼항 연산자)]
 - 형식 : (조건) ? 값1 : 값2
     조건이 참이면 값1, 거짓이면 값2 가 수식의 결과값
 - 예)
     absolute_value = (x > 0) ? x : -x;   // 절대값
     big   = (x > y) ? x : y;             // 최대값
     small = (x < y) ? x : y;             // 최소값
 - if-else를 한 줄로 간단히 쓸 수 있음, 피연산자가 3개라 "삼항" 연산자

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x,y;
	printf("First number: ");
	scanf("%d", &x);
	printf("Second number: ");
	scanf("%d", &y);

	printf("Larger number = %d\n", (x > y) ? x : y);	// 큰 값
	printf("Smaller number = %d\n", (x < y) ? x : y);	// 작은 값

	return 0;
}
