/*

 [개념 정리 - 반복 제어 변수의 값 변화]
 - i = 0 에서 시작해서 매번 1씩 증가 -> 0 1 2 ... 9 출력
 - 반복이 끝난 후 i 의 값은 10 (조건 i < 10 이 거짓이 되는 순간)
 - 반복 횟수 = 10번

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 0;

	while (i < 10)
	{
		printf("i=%d ", i);	// 0 ~ 9
		i++;
	}

	return 0;
}
