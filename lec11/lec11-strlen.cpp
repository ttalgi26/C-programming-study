/*

 [개념 정리 - 문자열 처리 라이브러리 <string.h>] (시험 단골)
 - 문자열 함수를 쓰려면 #include <string.h>
     strlen(s)        문자열 s 의 길이 ('\0' 제외)
     strcpy(dst, src) src 를 dst 로 복사
     strcat(dst, src) dst 뒤에 src 를 이어 붙임
     strcmp(s1, s2)   두 문자열 비교 (같으면 0)
 - strlen() vs sizeof
     char s[] = "abcdefgh";
     strlen(s) = 8  (글자 수)
     sizeof(s) = 9  (배열 크기, '\0' 포함)

*/

#include <stdio.h>
#include <string.h>

int main(void) {
	char s[] = "abcdefgh";
	int len = strlen(s);	// '\0' 앞까지 글자 수

	printf("Length of string %s = %d \n", s, len);	// 8
	printf("sizeof(s) = %d \n", (int)sizeof(s));	// 9 ('\0' 포함)

	return 0;
}
