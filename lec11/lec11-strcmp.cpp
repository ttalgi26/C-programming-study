/*

 [개념 정리 - 문자열 비교 strcmp()] (시험 단골)
 - int strcmp(const char *s1, const char *s2);
     반환값 < 0 : s1 이 s2 보다 (사전 순서로) 앞에 있다
     반환값 == 0 : s1 과 s2 가 같다
     반환값 > 0 : s1 이 s2 보다 뒤에 있다
 - 아스키 코드 순서로 한 글자씩 비교 -> 대문자('A'=65)가 소문자('a'=97)보다 앞
 - 문자열을 == 로 비교하면 안 됨!!
     if (s == "language")              // X : 주소(배열 위치)를 비교함
     if (strcmp(s, "language") == 0)   // O
 - 교재 코드의 scanf("%s", s1, sizeof(s1)) 는 scanf_s 용 인수가 남은 것 -> scanf("%s", s1) 로 수정

*/

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main(void) {
	char s1[80];	// 첫 번째 단어를 저장할 문자배열
	char s2[80];	// 두 번째 단어를 저장할 문자배열
	int result;

	printf("Enter first word:");
	scanf("%s", s1);
	printf("Enter second word:");
	scanf("%s", s2);

	result = strcmp(s1, s2);
	if (result < 0)
		printf("%s comes before %s.\n", s1, s2);
	else if (result == 0)
		printf("%s is equal to %s.\n", s1, s2);
	else
		printf("%s comes after %s.\n", s1, s2);

	return 0;
}
