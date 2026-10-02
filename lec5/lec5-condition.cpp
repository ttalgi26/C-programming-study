#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x,y;
	printf("First number: ");
	scanf("%d", &x);
	printf("Second number: ");
	scanf("%d", &y);

	printf("Larger number = %d\n", (x > y) ? x : y);
	printf("Smaller number = %d\n", (x < y) ? x : y);

	return 0;
}
