/*

 [개념 정리 - 매개변수가 2개인 함수 (거듭제곱 x^y)]
 - 반환형 int, 함수 이름 power, 매개변수 int x, int y
 - result 는 1로 초기화 (곱셈 누적), x 를 y 번 곱함
 - 함수 이름은 보통 동사 + 명사 (square, compute_average, get_integer)
 - main 의 x, y 와 power 의 x, y 는 이름만 같을 뿐 서로 다른 변수 (각자의 지역 변수)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수를 정의한다.
int get_integer()
{
	int value;
	printf("Enter an integer: ");
	scanf("%d", &value);
	return value;
}

// 함수를 정의한다.
int power(int x, int y)
{
	int i, result = 1;	// 곱셈 누적 -> 1로 초기화

	for (i = 0; i < y; i++)
		result *= x;	// result = result * x

	return result;
}

int main(void) {
	int x = get_integer();	// 함수를 호출한다.
	int y = get_integer();	// 함수를 호출한다.
	int result = power(x, y);

	printf("%d to the power of %d = %d \n", x, y, result);

	return 0;
}
