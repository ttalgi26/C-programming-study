/*

 [개념 정리 - break 문]
 - break : 반복 루프를 즉시 빠져나옴 (switch 문에서도 사용)
 - 중첩 반복문에서는 break 가 있는 "가장 안쪽" 반복문 하나만 빠져나옴
 - 여기서는 음수를 입력하면 10번 다 받기 전에 루프 조기 종료

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i;
	double number, sum = 0.0;

	for (i = 1; i <= 10; i++)
	{
		printf("Enter real number %d: ", i);
		scanf("%lf", &number);	// double형 실수는 %lf

		if (number < 0.0)	// 음수를 입력하면
			break;	// 반복 루프 종료 -> 아래 sum += number 도 실행 안 됨

		sum += number;
	}
	printf("Total = %f", sum);

	return 0;
}
