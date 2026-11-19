/*

 [개념 정리 - 공용체(union)] (구조체와 차이 시험 단골)
 - 공용체 : 같은 메모리 영역을 여러 개의 멤버가 공유
     union example { int i; char c; };
 - 구조체 vs 공용체
     구조체 : 멤버마다 따로 메모리 -> 크기 = 멤버 크기의 합 (이상)
     공용체 : 모든 멤버가 같은 메모리 -> 크기 = 가장 큰 멤버의 크기 (int 4바이트)
 - 한 멤버에 값을 넣으면 다른 멤버의 값도 바뀜 (같은 자리니까)
     data.c = 'A';    -> 첫 바이트가 65, data.i 는 나머지 3바이트(쓰레기 값)에 따라 달라짐
     data.i = 10000;  -> 10000 = 0x2710, 첫 바이트 0x10 이 data.c 로 보임 (출력 안 되는 문자)
 - 한 번에 하나의 멤버만 의미 있게 사용

*/

#include <stdio.h>

union example {
	int i;
	char c;
};

int main(void)
{
	union example data;

	data.c = 'A';
	printf("data.c:%c data.i:%i\n", data.c, data.i);	// data.i 는 쓰레기 값 포함

	data.i = 10000;
	printf("data.c:%c data.i:%i\n", data.c, data.i);	// data.c 가 바뀜

	printf("sizeof(data) = %d\n", (int)sizeof(data));	// 4 (가장 큰 멤버 int)

	return 0;
}
