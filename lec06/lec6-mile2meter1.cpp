/*

 [개념 정리 - 반복문이 필요한 이유]
 - 같은 처리 과정을 복사/붙여넣기로 반복하면 코드가 길어지고 수정이 어려움
 - 반복 구조를 쓰면 프로그램이 간결해짐 -> lec6-mile2meter2 (while 버전) 와 비교
 - 반복문의 종류
     조건 제어 반복 (while 문) : 특정 조건이 만족되는 동안 계속 반복
     횟수 제어 반복 (for 문)   : 정해진 횟수만큼 반복

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int meter;

	meter = 0 * 1609;	// 같은 처리 과정 #1
	printf("0 miles = %d meters\n", meter);

	meter = 1 * 1609;	// 같은 처리 과정 #2
	printf("1 miles = %d meters\n", meter);

	meter = 2 * 1609;	// 같은 처리 과정 #3
	printf("2 miles = %d meters\n", meter);

	return 0;
}
