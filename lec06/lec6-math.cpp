/*

 [개념 정리 - 무한 루프 + break]
 - while (1) 로 무한 반복하다가 정답이면 break 로 탈출
 - 반복 횟수를 모르고 "특정 조건에서 종료"할 때 자주 쓰는 패턴
 - rand() % 100 : 0 ~ 99 사이 난수

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int ans;

	printf("Generating arithmetic problems. \n");

	while (1) {	// 무한 루프
		int x = rand() % 100;	// 0 ~ 99
		int y = rand() % 100;
		printf("%d + %d = ", x, y);
		scanf("%d", &ans);

		if (x + y == ans) {
			printf("Correct.\n");
			break;	// 맞히면 탈출
		}
		else
			printf("Incorrect.\n");
	}

	return 0;
}
