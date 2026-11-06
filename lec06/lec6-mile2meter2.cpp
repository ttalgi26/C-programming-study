/*

 [개념 정리 - while 로 반복 처리]
 - lec6-mile2meter1 에서 3번 복사한 코드를 while 문 하나로 처리
 - 반복 제어 변수 i 를 계산에도 사용 (i 마일 -> i * 1609 미터)
 - i < 3 을 바꾸기만 하면 몇 마일까지든 출력 가능

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int meter;
	int i = 0;

	while (i < 3)	// 0, 1, 2 -> 3번 반복
	{
		meter = i * 1609;
		printf("%d miles = %d meters\n", i, meter);
		i++;
	}

	return 0;
}
