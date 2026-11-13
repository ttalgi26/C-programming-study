/*

 [개념 정리 - scanf("%s") 로 문자열 입력] (시험 단골)
 - scanf("%s", name);   <- 배열 이름 앞에 & 를 붙이지 않음!!
     배열 이름 자체가 첫 요소의 주소이기 때문 (9장 포인터)
 - scanf("%s") 는 공백(스페이스)에서 입력이 끊김
     "Hong gildong" 입력 -> name 에는 "Hong" 만, 남은 "gildong" 은 다음 scanf 가 가져감
     -> 실행 결과 : Hello, Hong from gildong.  (의도와 다름)
 - 공백 포함 한 줄을 받으려면 gets_s() 사용 (lec11-stringio2)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char name[100];
	char address[100];

	printf("What is your name? ");
	scanf("%s", name);	// & 없음! 공백 전까지만 저장

	printf("Where do you live? ");
	scanf("%s", address);

	printf("Hello, %s from %s.\n", name, address);

	return 0;
}
