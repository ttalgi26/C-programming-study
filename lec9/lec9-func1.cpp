/*

 [개념 정리 - 함수 정의와 호출, 반환값]
 - 함수 정의 형식
     반환형 함수이름(매개변수 목록)
     {
         지역 변수 선언
         문장들
         return 반환값;
     }
 - get_integer() : 반환형 int, 매개변수 없음 -> 입력받은 정수를 반환
 - 함수 호출(function call) : 함수 이름을 적어 주는 것
     1) 함수 안의 문장들이 순차적으로 실행
     2) 실행이 끝나면 호출한 위치로 되돌아감
     3) 결과값(반환값)을 전달할 수 있음
 - 반환값은 하나만 가능 (인수는 여러 개 가능)
     return 0;  return (x);  return x + y;  return;  (void 함수)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수를 정의한다.
int get_integer()
{
	int value;	// 지역 변수
	printf("Enter an integer: ");
	scanf("%d", &value);
	return value;	// 입력받은 값을 호출한 곳으로 반환
}

int main(void) {
	int x = get_integer();	// 함수를 호출한다. 반환값이 x에 저장
	int y = get_integer();	// 같은 함수를 다시 호출
	int result = x + y;

	printf("Sum of two numbers = %d \n", result);

	return 0;
}
