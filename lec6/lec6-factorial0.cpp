/*

 [개념 정리 - 팩토리얼 (while 버전)]
 - n! = n x (n-1) x (n-2) x ... x 2 x 1,  0! = 1
 - 곱셈 누적 변수는 반드시 1로 초기화!! (0으로 하면 결과가 항상 0)
     (덧셈 누적 sum 은 0으로 초기화)
 - i 를 감소시키면서 곱함 : 5 * 4 * 3 * 2 * 1 = 120
 - factorial *= i;  ==  factorial = factorial * i;

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 5;
	int factorial = 1;	// 곱셈 누적 -> 1로 초기화

	while (i >= 1)	// i를 감소시키면서 i가 1 이상이면 반복
	{
		factorial *= i;
		i--;
	}
	printf("%d \n", factorial);	// 120

	return 0;
}
