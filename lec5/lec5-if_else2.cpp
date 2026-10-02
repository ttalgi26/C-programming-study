#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number;
	printf("Enter number: ");
	scanf("%d", &number);

	if (number%2==0)
		printf("The entered integer is even.\n");
	else
		printf("The entered integer is odd.\n");

	return 0;
}
