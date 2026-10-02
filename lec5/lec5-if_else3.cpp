#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score;
	printf("Enter score: ");
	scanf("%d", &score);

	if (score >= 60) {
		printf("You passed.\n");
		printf("You can also receive a scholarship.");
	}
	else {
		printf("You failed.\n");
		printf("Try again.\n");
	}

	return 0;
}
