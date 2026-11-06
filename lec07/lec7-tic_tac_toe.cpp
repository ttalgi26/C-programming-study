/*

 [개념 정리 - 2차원 char 배열로 틱택토 보드] (7장 Mini Project)
 - char board[3][3] : 3x3 보드, ' ' (공백) 으로 초기화
 - k 가 짝수면 'X', 홀수면 'O' -> 조건 연산자 (k % 2 == 0) ? 'X' : 'O'
 - 보드 출력 : 행마다 board[i][0], board[i][1], board[i][2] 출력
 - (교재 코드 기준, 승패 판정/중복 위치 검사는 도전문제)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char board[3][3];
	int x, y, k, i;

	// 보드를 초기화한다.
	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++) board[x][y] = ' ';

	// 사용자로부터 위치를 받아서 보드에 표시한다.
	for (k = 0; k < 9; k++) {
		printf("(x, y) coordinates: ");
		scanf("%d %d", &x, &y);
		board[x][y] = (k % 2 == 0) ? 'X' : 'O';	// 현재의 순번에 따라 'X', 'O' 중 선택

		// 보드를 화면에 그린다.
		for (i = 0; i < 3; i++) {
			printf("---|---|---\n");
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");
	}

	return 0;
}
