/*

 [개념 정리 - 4칙 연산]
 - 산술 연산자 : +  -  *  /
 - 정수 / 정수 = 정수 -> 소수점 이하는 버려짐 (예: 100 / 200 = 0, 7 / 4 = 1)
 - 실수 결과가 필요하면 변수를 double로 선언하거나 형변환 필요 (4장)
 - y에 0을 넣으면 0으로 나누기 -> 실행 시간 오류 발생

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int result;	// 연산 결과를 저장할 변수 (하나를 재사용)

	printf("1st number : ");
	scanf("%d", &x);
	printf("2nd number : ");
	scanf("%d", &y);
	result = x + y; //덧셈
	printf("sum = %d\n", result);
	result = x - y; //뺄셈
	printf("diff = %d\n", result);
	result = x * y; //곱셈
	printf("times = %d\n", result);
	result = x / y; //나눔셈 (정수끼리 나누면 몫만 남음)
	printf("div = %d\n", result);

	return 0;
}
