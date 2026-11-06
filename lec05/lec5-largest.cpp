/*

 [개념 정리 - 최대값 찾기 알고리즘]
 1) 일단 첫 번째 값(a)을 최대값이라고 가정
 2) 나머지 값과 하나씩 비교해서 더 크면 최대값을 바꿈
 - else if 가 아니라 if 를 따로 쓰는 이유 : b, c 둘 다 각각 검사해야 하기 때문
 - 7장 배열에서 최소값/최대값 찾기(get_min)와 같은 알고리즘

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a, b, c, largest;

	printf("Enter three integers: ");
	scanf("%d %d %d", &a, &b, &c);

	largest = a;	// 일단 a가 최대값이라고 가정
	if (largest < b)	// b가 더 크면 b를 최대값으로
		largest = b;
	if (largest < c)	// c가 더 크면 c를 최대값으로
		largest = c;
	printf("The largest integr is %d.\n", largest);

	return 0;
}
