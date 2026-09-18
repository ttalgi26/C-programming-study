#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int sum;  //총액 저장하는 변수
	int price;  //각 항목의 가격을 저장하는 변수
	int nights;  //몇 박인지를 저장하는 변수

	sum = 0;
	printf("Enter the number of nights: ");
	scanf("%d", &nights);

	printf("Airefare: ");
	scanf("%d", &price);
	sum = sum + price;

	printf("Hotel price per night: ");
	scanf("%d", &price);
	sum = sum + price * nights;

	printf("Daily spending money: ");
	scanf("%d", &price);
	sum = sum + price * (nights+1);

	printf("==================================================\n");
	printf("Total travel cost: %d \n", sum);
	printf("==================================================\n");

	return 0;
}
