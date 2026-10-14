/*

 [개념 정리 - 복리 계산 & pow() 함수] (4장 Mini Project)
 - 원리금 = 원금 * (1 + 이율)^기간
 - pow(x, y) : x의 y제곱을 double로 반환 (<math.h> 필요)
 - int * double -> 자동 형변환으로 double 결과
 - 24달러, 6%, 382년 -> 약 1114억 달러

*/

#include <stdio.h>
#include <math.h>	// pow() 사용

int main(void) {
	int init_money = 24;	// 원금
	double interest = 0.06;	// 이율
	int years = 382;	// 기간

	double money = init_money * pow((1.0 + interest), years);	// 원금 * (1+이율)^기간
	printf("Amount after %d years = %f \n", years, money);

	return 0;
}
