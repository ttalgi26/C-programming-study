/*

 [개념 정리 - 단어 애나그램 게임 (문자열 섞기)]
 - 글자 섞기 : 난수 위치 2개(pos1, pos2)를 골라 두 글자를 교환, 이것을 문자열 길이만큼 반복
     난수 범위는 rand() % len -> 0 ~ len-1 (문자열 안)
     교환은 임시 변수 tmp 사용 (3장 swap)
 - 정답 검사 : strcmp(ans, SOL) != 0 인 동안 반복
 - #define SOL "apple" : 문자열도 기호 상수로 정의 가능
 - 교재 코드에 srand() 가 없어서 매번 같은 순서로 섞임 -> srand(time(NULL)) 추가

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctime>

#define SOL "apple"

int main(void) {
	char s[100] = SOL;
	char ans[100];
	int i, len;

	srand(time(NULL));	// (추가) 실행할 때마다 다르게 섞기
	len = strlen(s);

	for (i = 0; i < len; i++) {	// 길이만큼 반복
		int pos1 = rand() % len;	// 0 ~ len-1
		int pos2 = rand() % len;
		char tmp = s[pos1];	// 두 글자 교환
		s[pos1] = s[pos2];
		s[pos2] = tmp;
	}

	do {
		printf("Original word of %s? ", s);
		scanf("%s", ans);
	} while (strcmp(ans, SOL) != 0);	// 맞을 때까지

	printf("Congratulations. \n");

	return 0;
}
