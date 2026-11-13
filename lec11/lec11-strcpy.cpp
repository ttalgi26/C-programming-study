/*

 [개념 정리 - 문자열 복사 strcpy()] (시험 단골)
 - strcpy(dst, src) : src 문자열을 dst 로 복사 ('\0' 까지 복사)
     순서 주의 : 첫 번째가 받는 쪽(목적지), 두 번째가 원본
 - dst 배열은 src 를 담을 만큼 커야 함 ("Hello" -> 최소 6칸)
 - 배열에 문자열을 = 로 대입할 수 없음!!
     char s[100];
     s = "A friend in power is a friend lost.";   // 오류!
     strcpy(s, "A friend in power is a friend lost.");   // 이렇게 해야 함
   (초기화 char s[100] = "..."; 는 선언할 때만 가능)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char src[] = "Hello";
	char dst[6];	// 5글자 + '\0'

	strcpy(dst, src);	// dst <- src
	printf("Copied string = %s \n", dst);

	return 0;
}
