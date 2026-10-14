/*

 [개념 정리 - 누적 합 & 변수 재사용] (교재 2장 Mini Project : travel_fee.c)
 - 총 여행 비용 = 항공권 + (호텔 1박 가격 * 박수) + (박수 + 1) * 하루 용돈
 - sum = 0; 으로 반드시 초기화 -> 초기화 안 하면 쓰레기 값이 들어있음
 - sum = sum + price; : 기존 값에 더해서 다시 저장하는 "누적" 패턴
 - price 변수 하나를 여러 번 재사용 (입력받을 때마다 덮어씀)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int sum;  //총액 저장하는 변수
	int price;  //각 항목의 가격을 저장하는 변수
	int nights;  //몇 박인지를 저장하는 변수

	sum = 0;	// 0으로 초기화
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
	sum = sum + price * (nights+1);	// 3박이면 4일치 용돈

	printf("==================================================\n");
	printf("Total travel cost: %d \n", sum);
	printf("==================================================\n");

	return 0;
}
