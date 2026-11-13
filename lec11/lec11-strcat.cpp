/*

 [개념 정리 - 문자열 연결 strcat()]
 - strcat(dst, src) : dst 의 '\0' 자리부터 src 를 이어 붙임
     "Hello" + "World" -> "HelloWorld"  (공백이 자동으로 들어가지 않음)
 - dst 배열은 합친 결과 + '\0' 을 담을 만큼 커야 함
     5 + 5 + 1 = 11 -> char s[11]

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char s[11] = "Hello";	// 합친 결과(10글자) + '\0'

	strcat(s, "World");	// s에 문자열 "World"를 붙인다.
	printf("%s \n", s);	// HelloWorld

	return 0;
}
