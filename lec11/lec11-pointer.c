/*

 [개념 정리 - 문자 배열 vs 문자 포인터] (시험 단골)
     char s[] = "HelloWorld";   // ① 배열에 문자열을 "복사"해서 저장
     char *p = "HelloWorld";    // ② 문자열 상수가 있는 곳의 "주소"만 저장

                   s[0] = 'h' (글자 변경)     s = "Goodbye" / p = "Goodbye" (다른 문자열 대입)
     ① 문자 배열    가능                      불가능 (배열 이름은 상수, strcpy 사용)
     ② 문자 포인터  불가능 (프로그램 중지)     가능 (가리키는 주소만 바꿈) -> 큰 장점

 - 문자열 상수 "HelloWorld" 는 텍스트 세그먼트(읽기만 가능한 메모리)에 저장됨
   -> 포인터로 가리킬 수는 있지만 내용을 바꿀 수는 없음
 - 이 파일은 .c (C 언어) -> 교재처럼 char *p 로 쓸 수 있음
   .cpp (C++) 로 만들면 char *p = "..."; 가 에러 C2440 (const char[11] 을 char * 로 변환 불가)
   -> C++ 에서는 const char *p 로 써야 함

*/

#include <stdio.h>

int main(void) {
	char s[] = "HelloWorld";	// 배열 : 내용 변경 가능
	char* p = "HelloWorld";	// 포인터 : 문자열 상수를 가리킴

	s[0] = 'h';	// 변경 가능하다.
	// p[0] = 'h';	// 이 문장을 실행하면 프로그램의 작동이 중지된다. (읽기 전용)

	printf("Array string = %s \n", s);	// helloWorld
	printf("Pointer string = %s \n", p);	// HelloWorld

	p = "Goodbye";	// 이것은 가능하다. 큰 장점이다. (가리키는 주소만 바꿈)
	printf("Pointer string = %s \n", p);	// Goodbye

	return 0;
}
