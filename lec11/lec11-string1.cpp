/*

 [개념 정리 - 문자열과 NULL 문자] (시험 단골)
 - 문자열(string) : "Hello" 처럼 문자들의 모임 -> C 에서는 char 배열에 저장
 - 문자열의 끝은 반드시 NULL 문자 '\0' (아스키 코드 0) 로 끝나야 함
     컴퓨터는 어디까지가 의미 있는 문자열인지 모르기 때문에 끝 표시가 필요
 - 배열 크기 = 글자 수 + 1 ('\0' 자리)
     char str[6] = "Hello";   -> H e l l o \0  (6칸)
 - 초기화 방법 3가지
     char str[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };  // 배열 초기화 방식 ('\0' 직접 넣어야 함)
     char str[6] = "Hello";                             // 문자열로 초기화 ('\0' 자동)
     char str[]  = "Hello";                             // 크기 생략 -> 자동으로 6
 - 출력 : printf("%s", 배열이름);  -> '\0' 을 만날 때까지 출력

*/

#include <stdio.h>

int main(void) {
	char str1[6] = "Seoul";	// 5글자 + '\0' = 6
	char str2[3] = { 'i', 's', '\0' };	// 문자 하나씩 + '\0' 직접
	char str3[] = "the capital city of Korea.";	// 크기 자동 계산

	printf("%s %s %s\n", str1, str2, str3);

	return 0;
}
