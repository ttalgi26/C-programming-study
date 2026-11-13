/*

 [개념 정리 - 문자열의 배열 (2차원 문자 배열)] (시험 단골)
 - 여러 개의 문자열 저장 : char s[문자열 개수][각 문자열 최대 길이 + 1]
     char s[3][6] = { "init", "open", "close" };   // "close" 5글자 + '\0' = 6
 - menu[i] : i 번째 문자열 (1차원 배열 = 문자열 하나) -> printf("%s", menu[i])
 - menu[i][j] : i 번째 문자열의 j 번째 글자

*/

#include <stdio.h>

int main(void) {
	int i;
	char menu[5][10] = {	// 문자열 5개, 각각 최대 9글자 + '\0'
		"init",
		"open",
		"close",
		"read",
		"write"
	};

	for (i = 0; i < 5; i++)
		printf("Menu %d : %s \n", i, menu[i]);	// menu[i] = i번째 문자열

	return 0;
}
