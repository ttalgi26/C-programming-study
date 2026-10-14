/*

 [개념 정리 - 2차원 배열로 행렬 덧셈]
 - 행렬 덧셈 : 같은 위치의 원소끼리 더함  C[r][c] = A[r][c] + B[r][c]
 - 단위 행렬(대각선만 1) + 단위 행렬 -> 대각선만 2
 - #define 으로 ROWS, COLS 지정

*/

#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(void) {
	int r, c;
	int A[ROWS][COLS] = { { 1,0,0 }, { 0,1,0 }, { 0,0,1 } };
	int B[ROWS][COLS] = { { 1,0,0 }, { 0,1,0 }, { 0,0,1 } };
	int C[ROWS][COLS];

	// 두개의 행렬을 더한다.
	for (r = 0; r < ROWS; r++) {
		for (c = 0; c < COLS; c++) {
			C[r][c] = A[r][c] + B[r][c];	// 같은 위치끼리 덧셈
			printf("%d ", C[r][c]);
		}
		printf("\n");
	}

	return 0;
}
