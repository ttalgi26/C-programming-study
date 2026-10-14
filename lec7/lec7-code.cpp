/*

 [개념 정리 - 문자 배열 & 문자 연산]
 - 문자는 아스키 코드(정수)라서 덧셈 가능 : 'a' + 1 = 'b'
 - 'a' + i (i = 0 ~ 25) -> a ~ z
 - #define SIZE 26 처럼 기호 상수로 배열 크기 지정 -> 크기 변경 쉬움

*/

#include <stdio.h>
#define SIZE 26

int main(void) {
	int i;
	char codes[SIZE];	// 문자 26개 저장

	for (i = 0; i < SIZE; i++)
		codes[i] = 'a' + i;	// 'a'에 1을 더하면 'b'가 된다

	for (i = 0; i < SIZE; i++)
		printf("%c ", codes[i]);
	printf("\n");

	return 0;
}
