#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int temperature;
	printf("Enter temperature: ");
	scanf("%d", &temperature);

	if (temperature > 0)
		printf("It is above zero.\n");
	else
		printf("It is below zero.\n");

	printf("Current temp = %d deg.\n", temperature);
	return 0;
}
