/*

 [개념 정리 - 비트 연산 활용 (특정 비트 검사)]
 - 하드웨어 칩이 8개 센서 값을 1바이트(8비트)로 돌려줌 -> 각 비트가 센서 하나
 - 특정 비트가 1인지 검사 : status & 마스크
     비트 0 검사 -> status & 0x01 (00000001)
     결과가 0이 아니면 그 비트는 1
 - ex) status = 0x6f = 01101111 -> & 0x01 = 1 -> 세탁기 문이 열려 있음

*/

#include <stdio.h>

int main(void) {
	int status = 0x6f;	// 01101111

	printf("Door-open status = %d \n", (status & 0x01));	// 비트 0만 남기고 나머지는 0

	return 0;
}
