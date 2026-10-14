/*

 [개념 정리 - 누적 합 (while)]
 - sum 은 반드시 0으로 초기화 (쓰레기 값 방지)
 - sum += i; 를 i = 1 ~ 1000 까지 반복
 - 1 ~ n 까지의 합 = n(n+1)/2 -> 1000*1001/2 = 500500

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, sum;

	i = 1;
	sum = 0;	// 덧셈 누적 -> 0으로 초기화

	while (i <= 1000)
	{
		sum += i;	// sum = sum + i
		i++;
	}
	printf("The sum is %d.\n", sum);	// 500500

	return 0;
}
