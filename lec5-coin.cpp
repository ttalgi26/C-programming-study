#include <stdio.h>
#include <stdlib.h>
#include <ctime>

int main(void) {

	printf("Starting the coin toss game.\n");
	srand(time(NULL));

	int coin = rand() % 2;
	if (coin == 0)
		printf("Heads.\n");
	else
		printf("Tails.\n");
	return 0;
}
