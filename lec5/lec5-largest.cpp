#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a, b, c, largest;

	printf("Enter three integers: ");
	scanf("%d %d %d", &a, &b, &c);

	largest = a;
	if (largest < b)
		largest = b;
	if (largest < c)
		largest = c;
	printf("The largest integr is %d.\n", largest);

	return 0;
}
