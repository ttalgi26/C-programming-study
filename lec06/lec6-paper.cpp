/*

 [개념 정리 - 반복 횟수를 모를 때는 while]
 - 몇 번 반복할지 미리 모르고 "조건"으로 끝나는 경우 -> while 문이 적합
 - 종이를 접을 때마다 두께 2배 -> 에베레스트(8800m) 이상이 될 때까지 반복
     0.001m * 2^24 = 약 16777m -> 24번
 - const : 값을 바꿀 수 없는 상수 변수 (기호 상수의 또 다른 방법)
 - count 변수로 반복 횟수 세기

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double pheight = 0.001;	// 종이 두께 (단위 미터)
	const double everest = 8800.0;	// 에베레스트 높이 (단위 미터), const -> 변경 불가
	int count = 0;	// 접은 횟수

	while (pheight < everest) {
		pheight *= 2.0;	// 접을 때마다 두께 2배
		count++;
	}
	printf("Number of folds=%d \n\n", count);	// 24

	return 0;
}
