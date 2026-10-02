#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int math, physics, chemisty;

	printf("ENter math, physics, and chemistry sores on one line: ");
	scanf("%d %d %d", &math, &physics, &chemisty);

	if (math >= 50 && physics >= 50 && chemisty >= 50) {

		if ((math + physics) >= 150 || (math + chemisty) >= 150)
			printf("You can join.\n\n");
		else
			printf("Please ty again next time.\n\n");
	}
	else
		printf("Please ty again next time.\n\n");

	return 0;
}
