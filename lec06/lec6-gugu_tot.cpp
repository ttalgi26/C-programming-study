/*

 [개념 정리 - 중첩 반복문으로 전체 구구단]
 - 바깥 for (i) : 단 (1 ~ 9)
 - 안쪽 for (k) : 곱하는 수 (1 ~ 9)
 - 총 9 x 9 = 81줄 출력

*/

#include <stdio.h>

int main(void) {
	int i, k;

	for (i = 1; i <= 9; i++) {	// 단
		for (k = 1; k <= 9; k++) {	// 곱하는 수
			printf("%d X %d = %d \n", i, k, i * k);
		}
	}

	return 0;
}
