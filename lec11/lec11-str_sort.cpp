/*

 [개념 정리 - 문자열 정렬 (버블 정렬 + strcmp + strcpy)]
 - 7장 버블 정렬과 같은 구조, 정수 대신 문자열
     비교 : list[i] > list[i+1]          ->  strcmp(fruits[i], fruits[i+1]) > 0
     교환 : tmp = a; a = b; b = tmp;     ->  strcpy(tmp, a); strcpy(a, b); strcpy(b, tmp);
   (문자열은 > 로 비교 불가, = 로 대입 불가 -> 함수 사용)
 - 교재 코드에 #include <string.h> 가 빠져 있어서 추가

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	// (추가) strcmp, strcpy

#define SIZE 6

int main(void) {
	int i, k;
	char fruits[SIZE][20] = {
		"pineapple",
		"banana",
		"apple",
		"tomato",
		"pear",
		"avocado"
	};

	for (k = 0; k < SIZE; k++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (strcmp(fruits[i], fruits[i + 1]) > 0) {	// 앞이 사전 순서로 뒤면
				char tmp[20];	// 교환
				strcpy(tmp, fruits[i]);
				strcpy(fruits[i], fruits[i + 1]);
				strcpy(fruits[i + 1], tmp);
			}
		}
	}

	for (k = 0; k < SIZE; k++)
		printf("%s \n", fruits[k]);	// apple avocado banana pear pineapple tomato

	return 0;
}
