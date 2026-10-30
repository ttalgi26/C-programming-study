/*

 [개념 정리 - 인수와 매개변수] (시험 단골)
 - 매개변수(parameter) : 함수가 외부로부터 전달받는 데이터를 저장하는 변수
     = 형식 인수, 형식 매개변수   ex) int get_max(int x, int y) 의 x, y
 - 인수(argument) : 함수를 호출할 때 실제로 전달하는 값
     = 실인수, 실매개변수         ex) get_max(a, b) 의 a, b
 - 인수의 값이 매개변수로 "복사"되어 전달됨 (값에 의한 호출)
 - 인수의 개수와 타입은 매개변수와 일치해야 함
     get_max(10);         // X - 인수가 두 개여야 함
     get_max(0.1, 0.2);   // X - 인수의 타입은 정수여야 함
     get_max();           // X - 인수가 두 개여야 함
 - return 을 만나면 함수는 즉시 종료 -> if/else 각각 return 가능
 - 함수 호출을 다른 함수의 인수로 바로 사용 가능 : printf("%d", get_max(a, b));

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
int get_max(int x, int y)	// x, y : 매개변수
{
	if (x > y) return(x);
	else return(y);
}

int main(void) {
	int a = get_integer();	// 함수 호출
	int b = get_integer();	// 함수 호출

	printf("The larger number is %d.\n", get_max(a, b));	// a, b : 인수

	return 0;
}
