#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define EXCHANGE_RATE 1500	//기호상수 정의

int main(void) {
	int usd;
	int krw;
	printf("Enter USD Amount");
	scanf("%d", &usd);
	krw = EXCHANGE_RATE * usd;
	printf("%d USD = %d KRW. \n", usd, krw);
	return 0;
}
