#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

int main(void) {

	int user, computer;


	printf("Welcome to the rock, paper, scissors game.\n");
	printf("Choose one (scissor-0, rock-1, paper-2)");
	scanf("%d", &user);

	computer = rand() % 3;
	printf("User= %d\n", user);
	printf("Computer = %d\n", computer);

	if ((user + 1) % 3 == computer)
		printf("Computer wins \n");
	else if (computer == user)
		printf("Draw \n");
	else
		printf("User wins \n");

	return 0;
}
