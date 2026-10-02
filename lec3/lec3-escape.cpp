#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int id, pass;

	printf("Enter 4-digit ID and password:\n");
	printf("id:____\b\b\b\b");
	scanf("%d", &id);

	printf("pass:____\b\b\b\b");
	scanf("%d", &pass);

	printf("\a ID is \"%d\",password is \"%d\".\n", id, pass);

	return 0;
}
