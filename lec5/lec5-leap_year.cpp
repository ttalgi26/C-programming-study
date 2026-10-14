/*

 [개념 정리 - 논리 연산자로 윤년 판단]
 - 윤년 조건
     1) 4로 나누어 떨어지고
     2) 100으로 나누어 떨어지는 해는 제외
     3) 단, 400으로 나누어 떨어지면 윤년
   -> (year % 4 == 0 && year % 100 != 0) || year % 400 == 0
 - 논리 연산자 : && (AND, 둘 다 참)  || (OR, 하나라도 참)  ! (NOT, 참/거짓 반대)
 - 우선순위 : ! > && > ||   (헷갈리면 괄호로 묶기)
 - ex) 2024 윤년, 1900 윤년 아님, 2000 윤년

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int year;

	printf("Enter a year: ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d is a leap year.\n", year);
	else
		printf("%d is not a leap year.\n", year);

	return 0;
}
