/*

 [개념 정리 - 포인터로 변수의 값 바꾸기]
 - *p = 20; : p가 가리키는 곳(= number)에 20을 저장
     -> number 라는 이름을 쓰지 않고도 number 의 값을 바꿀 수 있음
 - *p 는 number 의 "별명" 처럼 동작 (*p 와 number 는 같은 메모리)

*/

#include <stdio.h>

int main(void) {
	int number = 10;
	int* p;

	p = &number;	// p가 number를 가리킴
	printf("value of number = %d\n", number);	// 10

	*p = 20;	// p가 가리키는 곳에 20 저장 -> number가 바뀜
	printf("value of number = %d\n", number);	// 20

	return 0;
}
