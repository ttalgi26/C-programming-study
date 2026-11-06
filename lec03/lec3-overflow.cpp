/*

 [개념 정리 - 오버플로우(overflow)]
 - 변수가 저장할 수 있는 최대값을 넘어가면 오버플로우 발생
 - short 범위 : -32768 ~ 32767 (2바이트)
     32767 + 1 -> -32768 (최대값 다음은 최소값으로 돌아감, 자동차 주행거리계처럼)
 - unsigned : 음수 없이 0 이상의 값만 저장 -> 양수 범위가 2배
     unsigned short : 0 ~ 65535
     unsigned int speed;  ==  unsigned speed;  (int 생략 가능)
 - 컴파일러는 오버플로우를 에러로 알려주지 않음 -> 자료형 선택을 잘 해야 함

*/

#include <stdio.h>

int main(void) {
	short s_money = 32767;	// short의 최대값으로 초기화
	s_money = s_money + 1;	// 오버플로우 발생
	printf("s_money = %d\n", s_money);	// -32768 출력

	return 0;
}
