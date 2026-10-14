/*

 [개념 정리 - while 문]
 - while (조건식) { 반복할 문장; }
     조건식이 참인 동안 문장들을 반복 실행, 거짓이 되면 빠져나옴
 - 조건을 "먼저" 검사 -> 처음부터 거짓이면 한 번도 실행 안 됨
 - 반복 제어 변수(i) 3요소 : 초기화(i = 0) / 조건 검사(i < 10) / 변경(i++)
     i++ 를 빠뜨리면 조건이 계속 참 -> 무한 루프!
 - i = 0 부터 i < 10 까지 -> 0~9, 총 10번 반복

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 0;	// 반복 제어 변수 초기화

	while (i < 10)	// i가 10보다 작은 동안 반복
	{
		printf("I will not talk during class.\n");
		i++;	// 반복 제어 변수 증가 (없으면 무한 루프)
	}

	return 0;
}
