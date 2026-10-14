/*

 [개념 정리 - 순차 탐색(sequential search)]
 - 배열의 처음부터 끝까지 하나씩 비교하면서 찾는 값(key)을 탐색
 - 찾으면 break 로 반복 종료 -> 더 비교할 필요 없음
 - 끝까지 못 찾으면 반복이 끝났을 때 i == SIZE
     -> if (i == SIZE) 로 탐색 실패 판단 가능

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void) {
	int key, i;
	int list[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	printf("[ ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}
	printf("]\n");

	printf("Enter a value to search: ");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) {	// 찾으면
			printf("Search succeeded. Index = %d\n", i);
			break;	// 탐색 종료
		}
	}
	if (i == SIZE)	// break 없이 끝까지 돌았으면 실패
		printf("Search failed.\n");

	return 0;
}
