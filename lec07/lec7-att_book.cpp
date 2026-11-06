/*

 [개념 정리 - 배열로 출석부 만들기]
 - int att_book[SIZE] = { 0 }; -> 모든 요소를 0으로 초기화
 - 1 ~ 16번째 강의를 인덱스 0 ~ 15 에 저장 -> 출력할 때 i + 1
 - 결석 횟수 / 16.0 -> 실수 나눗셈 (16 으로 나누면 정수 나눗셈 -> 0)
 - %% : % 문자 출력

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 16

int main(void) {
	int att_book[SIZE] = { 0 };	// 전부 0으로 초기화
	int i, count = 0;

	// 사용자로부터 출석인지 결석인지를 받아서 배열에 저장한다.
	for (i = 0; i < SIZE; i++) {
		printf("Did you attend lecture %d? (1=present, 0=absent): ", i + 1);
		scanf("%d", &att_book[i]);
	}

	// 배열을 검사하여서 결석한 횟수를 계산한다.
	for (i = 0; i < SIZE; i++) {
		if (att_book[i] == 0)
			count++;
	}

	// 이번 학기 결석률을 계산한다.
	double ratio = count / 16.0;	// 16.0 -> 실수 나눗셈
	if (ratio > 0.3)
		printf("Insufficient attendance (%lf%%). \n", ratio * 100.0);
	else
		printf("Attendance OK (absence %lf%%). \n", ratio * 100.0);

	return 0;
}
