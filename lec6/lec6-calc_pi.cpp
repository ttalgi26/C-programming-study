/*

 [개념 정리 - 몬테카를로 시뮬레이션으로 파이 계산]
 - 몬테카를로 : 난수를 이용해서 수학/물리 문제를 해결하는 기법
 - 반지름 1인 원과 한 변이 2인 정사각형 -> 점이 원 안에 찍힐 확률 = π / 4
     (여기선 1/4 영역만 사용 : x, y 모두 0 ~ 1)
 - x^2 + y^2 <= 1 이면 원 안의 점
 - π ≈ (원 안의 점 개수 / 전체 점 개수) * 4
 - (double)rand() / RAND_MAX : 0.0 ~ 1.0 사이 실수 난수
     형변환 안 하면 정수 나눗셈 -> 거의 항상 0

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctime>

int main(void) {
	srand(time(NULL));
	int niter, inside_dots = 0;
	double x, y, z, pi;

	printf("Number of iterations: ");
	scanf("%d", &niter);

	inside_dots = 0;
	for (int i = 0; i < niter; i++) {
		x = (double)rand() / RAND_MAX;	// 0.0 ~ 1.0
		y = (double)rand() / RAND_MAX;
		z = x * x + y * y;
		if (z <= 1) inside_dots++;	// 원 안에 찍힌 점
	}

	pi = (double)inside_dots / niter * 4;
	printf("Pi = %lf\n\n", pi);

	return 0;
}
