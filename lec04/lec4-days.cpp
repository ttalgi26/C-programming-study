/*

 [개념 정리 - / 와 % 로 단위 변환]
 - 연수 = 전체 일수 / 365
 - 주수 = (전체 일수 % 365) / 7     <- 1년을 빼고 남은 일수를 7로 나눈 몫
 - 남은 일수 = 전체 - (연수*365 + 주수*7)   (= (days % 365) % 7 과 같음)
 - ex) 389일 -> 1년 3주 3일

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int days, years, weeks;

	printf("Enter total number of days: ");
	scanf("%d", &days);

	years = (days / 365);	// 년수
	weeks = (days % 365) / 7;	// 주수
	days = days - ((years * 365) + (weeks * 7));	// 남은 일수

	printf("%d years ", years);
	printf("%d weeks ", weeks);
	printf("%d days \n", days);

	return 0;
}
