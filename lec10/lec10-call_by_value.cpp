/*

 [개념 정리 - 값에 의한 호출 (call-by-value)] (시험 단골)
 - C 의 기본적인 인수 전달 방법
 - 인수의 "값" 이 매개변수로 복사됨
     -> 함수 안에서 매개변수를 바꿔도 원본(number)은 바뀌지 않음
 - 결과 : number = 1  (99 가 아님!)
 - lec10-call_by_ref 와 비교

*/

#include <stdio.h>

void modify(int value)	// value 는 number 의 복사본
{
	value = 99;	// 복사본만 바뀜
}

int main(void) {
	int number = 1;

	modify(number);	// number 의 값(1)이 복사되어 전달
	printf("number = %d\n", number);	// 1

	return 0;
}
