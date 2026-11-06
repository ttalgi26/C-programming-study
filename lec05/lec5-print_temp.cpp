/*

 [개념 정리 - 연속적인 if로 구간 나누기]
 - 작은 값부터 차례로 검사하면 앞의 조건이 거짓인 게 보장되므로 범위의 한쪽만 쓰면 됨
     tmp < -10          -> very cold
     tmp < 0  (-10 ~ -1) -> cold
     tmp < 10 (0 ~ 9)    -> chilly
     ...
 - 실행할 문장이 하나면 if 와 같은 줄에 써도 됨

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int tmp;

	printf("Enter today's temperature: ");
	scanf("%d", &tmp);

	if (tmp < -10) printf("It is very cold. \n");
	else if (tmp < 0) printf("It is cold.\n");	// -10 이상 0 미만
	else if (tmp < 10) printf("It is chilly.\n");
	else if (tmp < 20) printf("It is pleasant.\n");
	else if (tmp < 30) printf("It is hot.\n");
	else printf("It is very hot.\n");	// 30 이상

	return 0;
}
