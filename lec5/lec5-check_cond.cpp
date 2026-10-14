/*

 [개념 정리 - 중첩 if & 논리 연산자]
 - 1차 조건 : 수학, 물리, 화학 모두 50점 이상          -> && (AND)
 - 2차 조건 : (수학+물리) >= 150 또는 (수학+화학) >= 150 -> || (OR)
 - if 안에 또 if 가 있는 것 = 중첩 if
 - else는 가장 가까운 if와 짝을 이룸 -> 헷갈리면 중괄호로 명확하게

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int math, physics, chemisty;

	printf("ENter math, physics, and chemistry sores on one line: ");
	scanf("%d %d %d", &math, &physics, &chemisty);

	if (math >= 50 && physics >= 50 && chemisty >= 50) {	// 1차 조건 (모두 참이어야)

		if ((math + physics) >= 150 || (math + chemisty) >= 150)	// 2차 조건 (하나만 참이어도)
			printf("You can join.\n\n");
		else
			printf("Please ty again next time.\n\n");
	}
	else
		printf("Please ty again next time.\n\n");

	return 0;
}
