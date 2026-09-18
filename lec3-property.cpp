#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define EXCHANGE_RATE 1500	//기호상수 정의

int main(void) {
  long long int property;  //int만 쓸경우 오버플로우 방지
	long long int saving;

	printf("Enter monthly saving : ");
	scanf("%lld", &saving);
	property = saving * 12 * 30;
	printf("Property after 30 years = %lld KRW \n", property);
	return 0;
}
