/*

 [개념 정리 - 정렬 & 버블 정렬] (시험 단골)
 - 정렬 : 값들을 크기순으로 나열 (오름차순 / 내림차순)
 - 버블 정렬 : 인접한 두 원소를 비교해서 순서가 틀리면 교환
     한 번 훑을 때마다(1 pass) 가장 큰 값이 맨 뒤로 이동 (거품이 올라가듯)
 - 교환은 임시 변수 tmp 사용 (3장 swap)
 - 안쪽 for 는 i < SIZE - 1 까지 -> list[i + 1] 이 범위를 넘지 않게
 - 내림차순으로 바꾸려면 비교를 list[i] < list[i + 1] 로
 - 진행 과정 { 16, 7, 9, 1, 3 }
     1회 후 : 7 9 1 3 16
     2회 후 : 7 1 3 9 16
     3회 후 : 1 3 7 9 16

*/

#include <stdio.h>
#define SIZE 5

int main(void) {
	int i, k;
	int list[SIZE] = { 16, 7, 9, 1, 3 };

	// 배열의 요소를 정렬한다.
	for (k = 0; k < SIZE; k++) {	// 전체를 SIZE 번 훑음
		for (i = 0; i < SIZE - 1; i++) {	// 인접한 두 원소 비교
			if (list[i] > list[i + 1]) {	// 크기 순이 아니면
				// 서로 교환한다.
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
	}

	// 배열의 요소를 출력한다.
	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}

	return 0;
}
