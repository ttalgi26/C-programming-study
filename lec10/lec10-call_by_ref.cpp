/*

 [개념 정리 - 참조에 의한 호출 (call-by-reference)] (시험 단골)
 - C 에서는 포인터를 이용해서 흉내 냄
 - 인수의 "주소" 가 매개변수로 복사됨
     -> 함수 안에서 *ptr 로 원본을 직접 변경할 수 있음
 - 호출 : modify(&number);   <- 주소를 계산해서 보냄
   정의 : void modify(int *ptr)  <- 포인터로 받음
 - 결과 : number = 99
 - scanf("%d", &x); 도 같은 원리 : 주소를 넘겨야 함수가 x 에 값을 저장할 수 있음

*/

#include <stdio.h>

void modify(int* ptr)	// ptr 은 number 의 주소를 가짐
{
	*ptr = 99;	// 매개 변수를 통하여 원본을 변경한다.
}

int main(void) {
	int number = 1;

	modify(&number);	// 주소를 계산해서 보낸다.
	printf("number = %d\n", number);	// 99

	return 0;
}
