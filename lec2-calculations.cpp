#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int result;

	printf("1st number : ");
	scanf("%d", &x);
	printf("2nd number : ");
	scanf("%d", &y);
	result = x + y; //덧셈
	printf("sum = %d\n", result);
	result = x - y; //뺄셈
	printf("diff = %d\n", result);
	result = x * y; //곱셈
	printf("times = %d\n", result);
	result = x / y; //나눔셈
	printf("div = %d\n", result);

	return 0;
}
