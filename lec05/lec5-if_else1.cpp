/*

 [개념 정리 - 3가지 기본 제어 구조 & if-else]
 - 순차 구조(sequence) : 명령어가 순서대로 실행
 - 선택 구조(selection) : 조건에 따라 여러 개 중 하나를 선택해서 실행 (if, switch)
 - 반복 구조(iteration) : 같은 명령어를 반복 실행 (while, for)
 - if (조건식) 문장1; else 문장2;
     조건식이 참(0이 아닌 값)이면 문장1, 거짓(0)이면 문장2 실행
 - 실행할 문장이 하나면 중괄호 { } 생략 가능, else 절도 생략 가능
 - if-else 가 끝나면 그 다음 문장은 조건과 상관없이 항상 실행

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int temperature;
	printf("Enter temperature: ");
	scanf("%d", &temperature);

	if (temperature > 0)	// temperature가 0보다 크면 아래 문장 실행
		printf("It is above zero.\n");
	else	// 0 이하이면 아래 문장 실행
		printf("It is below zero.\n");

	printf("Current temp = %d deg.\n", temperature);	// if-else와 상관없이 항상 실행
	return 0;
}
