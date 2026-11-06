/*

 [개념 정리 - continue 문] (break 와 차이 시험 단골)
 - continue : 현재 반복을 중단하고 "다음 반복"을 시작 (루프를 빠져나가지 않음)
     for 문 : continue 후 증감식(i++)으로 이동
     while 문 : continue 후 조건식으로 이동 (증감 코드가 continue 뒤에 있으면 무한 루프 주의)
 - break    : 반복문 자체를 탈출
 - 여기서는 홀수면 건너뛰고 짝수만 출력 -> 0 2 4 6 8

*/

#include <stdio.h>

int main(void) {
	int i;

	for (i = 0; i < 10; i++) {
		if (i % 2 == 1)	// 홀수이면
			continue;	// 아래 printf 건너뛰고 다음 반복(i++)으로
		printf("Integer: %d \n", i);
	}

	return 0;
}
