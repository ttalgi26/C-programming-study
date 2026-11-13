/*

 [개념 정리 - 문자열 입출력 라이브러리 함수]
     scanf("%s", s)            문자열을 읽어서 배열 s[] 에 저장 (공백에서 끊김)
     printf("%s", s)           배열 s[] 에 저장되어 있는 문자열을 출력
     gets_s(char s[], int len) 한 줄의 문자열을 읽어서 배열 s[] 에 저장 (공백 포함, 엔터까지)
     puts(char s[])            배열 s[] 의 문자열을 출력하고 줄바꿈
 - gets_s 는 비주얼 스튜디오 함수 (다른 컴파일러에서는 fgets(s, 크기, stdin) 사용)
 - 두 번째 인수는 배열 크기 -> 넘치게 입력해도 배열 밖에 쓰지 않음 (안전)

*/

#include <stdio.h>

int main(void) {
	char name[100];
	char address[100];

	printf("What is your name? ");
	gets_s(name, 99);	// 공백 포함 한 줄 입력

	printf("Where do you live? ");
	gets_s(address, 99);

	printf("Hello, %s from %s.\n", name, address);

	return 0;
}
