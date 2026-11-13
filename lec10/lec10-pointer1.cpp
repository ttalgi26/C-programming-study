/*

 [개념 정리 - 포인터의 선언과 간접 참조] (시험 단골)
 - 포인터(pointer) : 주소를 가지고 있는 변수
 - 선언 : 자료형 *포인터이름;   ex) int *p;  -> int형 변수의 주소를 저장하는 포인터
 - 포인터와 변수의 연결
     int number = 10;   // 정수형 변수
     int *p;            // 포인터 변수
     p = &number;       // number의 주소를 p에 대입 -> "p가 number를 가리킨다"
 - 포인터 연산자 2가지
     &  주소 연산자       : 변수의 주소를 반환       &number
     *  간접 참조 연산자  : 포인터가 가리키는 곳의 값  *p
 - 결과
     &number == p        (둘 다 number의 주소)
     number  == *p       (둘 다 10)
 - 주의 : 선언할 때의 * (int *p) 와 사용할 때의 * (*p) 는 의미가 다름
     선언 : "포인터 변수다" 표시,  사용 : "가리키는 곳의 값"

*/

#include <stdio.h>

int main(void) {
	int number = 10;
	int* p;	// 포인터 선언

	p = &number;	// p가 number를 가리킴

	printf("address of number = %u\n", &number);	// number의 주소
	printf("value of pointer = %u\n", p);	// p에 저장된 값 = number의 주소
	printf("value of number = %d\n", number);	// 10
	printf("value pointed to by p = %d\n", *p);	// p가 가리키는 값 = 10

	return 0;
}
