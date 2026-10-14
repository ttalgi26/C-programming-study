/*

 [개념 정리 - 배열에서 최소값 찾기] (시험 단골)
 1) 첫 번째 원소를 최소값 minimum 이라고 가정
 2) for (i = 1; i < 크기; i++) 로 나머지 원소와 비교
 3) prices[i] < minimum 이면 minimum = prices[i]
 4) 반복이 끝나면 minimum 에 최소값이 저장됨
 - i 가 1 부터 시작하는 이유 : 0번은 이미 minimum 에 넣었으니까
 - 최대값은 부등호만 반대로 (prices[i] > maximum)

*/

#include <stdio.h>
#define SIZE 10

int main(void) {
	int prices[SIZE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 19 };
	int i, minimum;

	printf("[ ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", prices[i]);
	}
	printf("]\n");

	minimum = prices[0];	// 첫 번째 원소를 최소값으로 가정
	for (i = 1; i < SIZE; i++) {
		if (prices[i] < minimum)	// 더 작은 값을 찾으면
			minimum = prices[i];	// 최소값 갱신
	}
	printf("Minimum value is %d.\n", minimum);

	return 0;
}
