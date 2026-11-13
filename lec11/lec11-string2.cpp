/*

 [개념 정리 - 문자열의 글자 하나 바꾸기]
 - 문자열은 char 배열이므로 인덱스로 글자 하나씩 접근/변경 가능
     str[0] = 'c';   -> 첫 글자를 'c' 로
 - 글자 하나는 작은따옴표 'c', 문자열은 큰따옴표 "c"

*/

#include <stdio.h>

int main(void) {
	char str[] = "komputer";

	printf("%s\n", str);	// komputer
	str[0] = 'c';	// 첫 번째 글자 변경
	printf("%s\n", str);	// computer

	return 0;
}
