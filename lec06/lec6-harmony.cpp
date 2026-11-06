/*

 [개념 정리 - 조화 수열의 합]
 - 1 + 1/2 + 1/3 + ... + 1/n
 - 주의!! 1 / i 로 쓰면 정수 나눗셈 -> i >= 2 부터 전부 0
     -> 1.0 / (double)i 처럼 실수로 계산해야 함
 - 각 항은 0에 가까워지지만 합은 계속 커짐 (발산)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, n;
	double sum = 0.0;

	printf("Number of terms: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		sum += 1.0 / (double)i;	// 1 / i 로 쓰면 정수 나눗셈 -> 0

	printf("Sum of the series=%lf \n\n", sum);

	return 0;
}
