#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char op;
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
		printf("%d \n", x / y);
	else
		printf("Unsupported operator. \n");

	return 0;
}
