/*

 [개념 정리 - 문자형 char와 아스키 코드]
 - 컴퓨터는 문자도 숫자로 저장 -> 아스키 코드(ASCII) 사용 (7비트, 0~127)
     '!' = 33, '0' = 48, 'A' = 65, 'B' = 66, 'a' = 97, 'b' = 98
     대문자 + 32 = 소문자
 - char는 1바이트 정수형 -> 문자도 정수도 저장 가능
 - 문자 상수는 작은따옴표 'A', 문자열은 큰따옴표 "A"
 - 1 과 '1' 의 차이 : 1은 정수 1, '1'은 문자 1의 아스키 코드 49
 - 같은 변수라도 %c 로 출력하면 문자, %d 로 출력하면 아스키 코드 값
 - getchar() : 문자 하나를 입력받는 함수 (scanf("%c", &c) 와 같음)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char c;	// 문자형 변수

	c = 'A';	// 문자 'A' 저장 (실제로는 65가 저장됨)
	printf("ASCII code of A = %d\n", c);	// %d -> 65

	printf("Enter a character: ");
	c = getchar();	// scanf("%c", &c); 해도 됨
	printf("ASCII code of %c = %d\n", c, c);	// %c 문자, %d 아스키 코드

	return 0;
}
