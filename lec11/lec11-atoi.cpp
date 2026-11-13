/*

 [개념 정리 - 문자열 <-> 수치 변환]
 - 문자열 "100" 과 정수 100 은 다름 ("100" 은 '1' '0' '0' '\0' 문자 4개)
     atoi("100")           문자열 -> 정수 100 (<stdlib.h>, ascii to int)
     sscanf(s, "%d", &i)   문자열 s 에서 정수를 읽어 i 에 저장 (scanf 인데 키보드 대신 문자열에서)
     sprintf(t, "%d", 100) 정수 100 을 문자열 "100" 으로 만들어 t 에 저장 (printf 인데 화면 대신 문자열로)
 - 교재 코드는 i, t 를 출력하지 않아서 결과 확인용 printf 추가

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const char s[] = "100";
	char t[100] = "";
	int i;

	printf("%d \n", atoi("100"));	// atoi()는 문자열 "100"을 정수 100으로 바꾼다.

	sscanf(s, "%d", &i);	// 문자열 "100"을 정수 100으로 i에 저장
	printf("i + 1 = %d \n", i + 1);	// 101 (정수라서 계산 가능)

	sprintf(t, "%d", 100);	// 정수 100을 문자열 "100"으로 t에 저장
	printf("t = %s \n", t);

	return 0;
}
