/*

 [개념 정리 - do-while 문] (while 과의 차이 시험 단골)
 - do { 문장; } while (조건식);    <- 끝에 세미콜론 필수!!
 - 조건을 루프의 "끝"에서 검사 -> 적어도 한 번은 반드시 실행
     while    : 먼저 검사 -> 0번 실행될 수도 있음
     do-while : 먼저 실행 -> 최소 1번 실행
 - 입력 처리(메뉴 선택)에 많이 사용 : 일단 메뉴를 보여주고, 잘못된 값이면 다시 반복

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 0;

	do
	{
		printf("1---Open file\n");
		printf("2---Save file\n");
		printf("3---Exit\n");
		printf("Select one: ");
		scanf("%d", &i);
	} while (i < 1 || i > 3);	// 정상적인 메뉴 값(1~3)이 아니면 반복

	printf("Selected menu=%d\n", i);

	return 0;
}
