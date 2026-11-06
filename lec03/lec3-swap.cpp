/*

 [개념 정리 - 두 변수의 값 교환 (swap)]
 - 틀린 방법 : a = b; b = a;
     -> a = b 하는 순간 a의 원래 값이 사라짐 -> 둘 다 200이 됨
 - 맞는 방법 : 임시 변수 tmp 사용
     tmp = a;  // ① a 값을 잠깐 보관
     a = b;    // ② b 값을 a에
     b = tmp;  // ③ 보관한 원래 a 값을 b에
 - 7장 버블 정렬에서도 이 교환 방법을 그대로 사용

*/

#include <stdio.h>

int main(void) {
	int a = 100;
	int b = 200;
	int tmp;	// 임시 변수

	printf("before: a=%d b=%d \n", a, b);

	tmp = a;	// ①
	a = b;	// ②
	b = tmp;	// ③

	printf("after : a=%d b=%d \n", a, b);

	return 0;
}
