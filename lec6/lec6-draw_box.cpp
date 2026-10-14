/*

 [개념 정리 - for 문으로 반복 출력]
 - 윗변, 아랫변은 한 번만 출력, 가운데 줄만 for 로 5번 반복
 - for 없이 하면 printf 를 줄마다 호출해야 함

*/

#include <stdio.h>

int main(void) {
	int i;

	printf("**********\n");	// 윗변

	for (i = 0; i < 5; i++)	// 0 ~ 4 -> 5번
		printf("*        *\n");

	printf("**********\n");	// 아랫변

	return 0;
}
