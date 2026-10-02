#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a, b, c;

	printf("Enter three sides of a triangle: ");
	scanf("%d%d%d", &a, &b, &c);

	if ((a + b > c) && (b + c > a) && (a + c > b))
		printf("Valid triangle.\n");
	else
		printf("Not a valid triangle.\n");

	return 0;
}
