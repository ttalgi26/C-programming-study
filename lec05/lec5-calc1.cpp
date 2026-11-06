/*

 [개념 정리 - 문자 비교 & 다중 if]
 - scanf("%d %c %d", ...) : 정수, 문자, 정수를 한 번에 입력 (10 + 20)
 - 문자 비교는 작은따옴표 : op == '+'
 - 같은 기능을 switch 문으로도 만들 수 있음
     switch (op) { case '+': ... break; case '-': ... break; default: ... }

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char op;	// 연산자
	int x, y;

	printf("Enter an expression: ");
	scanf("%d %c %d", &x, &op, &y);
	if (op == '+')
		printf("%d \n", x + y);
	else if (op == '-')
		printf("%d \n", x - y);
	else if (op == '*')
		printf("%d \n", x * y);
	else if (op == '/')
		printf("%d \n", x / y);	// 정수 나눗셈 (몫)
	else
		printf("Unsupported operator. \n");

	return 0;
}
