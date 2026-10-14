/*

 [개념 정리 - 거스름돈 계산 (/ 와 % 활용)]
 - 동전 개수 = 거스름돈 / 동전 단위
 - 남은 돈   = 거스름돈 % 동전 단위
 - 큰 단위부터 차례로 계산 (100원 -> 10원)
 - ex) 730원 -> 100원 7개, 남은 30원 -> 10원 3개

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int money, price, change;

	printf("Money inserted: ");
	scanf("%d", &money);
	printf("Item price: ");
	scanf("%d", &price);

	change = money - price;	// 거스름돈
	printf("Change: %d\n\n", change);

	int coin100s = change / 100;	// 100원짜리 개수
	change = change % 100;	// 100원짜리 내주고 남은 돈
	int coin10s = change / 10;	// 10원짜리 개수
	change = change % 10;	// 10원짜리 내주고 남은 돈

	printf("Number of 100-won coins: %d\n", coin100s);
	printf("Number of 10-won coins: %d\n", coin10s);

	return 0;
}
