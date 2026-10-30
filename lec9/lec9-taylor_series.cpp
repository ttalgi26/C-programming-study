/*

 [개념 정리 - 여러 함수를 조합해서 계산 (테일러 급수)]
 - e^x = x^0/0! + x^1/1! + x^2/2! + ... = sum( x^n / n! )
 - power(), factorial() 을 따로 만들고 main 에서 조합
 - 반환형을 double 로 한 이유 : x^n, n! 은 금방 int 범위를 넘음 (오버플로우 방지)
 - main() 위에 함수를 먼저 정의하면 함수 원형이 필요 없음

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

double power(int x, int y)	// x^y
{
	double result = 1.0;
	for (int i = 0; i < y; i++)
		result *= x;
	return result;
}

double factorial(int n)	// n!
{
	double result = 1.0;
	if (n <= 1) return 1;	// 0! = 1! = 1
	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}

int main(void) {
	double sum = 0.0;
	int x, n;

	printf("Enter values for x and n: ");
	scanf("%d %d", &x, &n);

	for (int i = 0; i <= n; i++)
		sum += power(x, i) / factorial(i);	// x^i / i!

	printf("e^%d = %.3lf\n", x, sum);	// %.3lf : 소수점 3자리

	return 0;
}
