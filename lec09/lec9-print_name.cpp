/*

 [개념 정리 - 함수의 필요성]
 - 함수(function) : 특정 작업을 수행하여 그 결과를 반환하는 문장들의 집합
 - 같은 printf 4줄을 두 번 쓰는 대신 print_name() 함수로 한 번 정의하고 2번 호출
 - 함수의 장점 (시험 단골)
     1) 코드 중복을 막을 수 있다
     2) 한 번 작성한 함수는 여러 번 재사용할 수 있다
     3) 프로그램을 모듈로 나눌 수 있어 개발이 쉽고 체계적, 유지보수도 쉬워짐
 - 함수는 프로그램을 이루는 빌딩블록(레고 블록, 부품)
 - void : 반환값이 없는 함수

*/

#include <stdio.h>

void print_name()	// 함수 정의 (반환값 없음)
{
	printf("****************************\n");
	printf("Korea University Computer Engineering \n");
	printf("Hong Gil-dong \n");
	printf("****************************\n");
}

int main(void) {
	print_name();	// 함수 호출
	print_name();	// 한 번 정의하면 여러 번 호출 가능

	return 0;
}
