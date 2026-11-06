/*

 [개념 정리 - 반복문으로 2배씩 증가 (복리의 무서움)]
 - 첫날 1원, 매일 전날의 2배 -> 30일째 2^29 = 536870912원 (약 5억)
 - 1억원 일시불보다 훨씬 많음
 - 큰 수이므로 double 사용
 - for 문 안에서 변수 선언 가능 : for (int i = 2; ...) -> i 는 for 문 안에서만 사용 가능

*/

#include <stdio.h>

int main(void) {
	double money = 1.0;	// 첫날 1원

	for (int i = 2; i <= 30; i++) {	// 2일째부터 30일째까지
		money *= 2.0;	// 전날의 2배
		printf("Day %d current amount=%lf\n", i, money);
	}

	return 0;
}
