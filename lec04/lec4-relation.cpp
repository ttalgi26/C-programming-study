/*

 [개념 정리 - 관계 연산자]
 - 두 피연산자를 비교 : ==  !=  >  <  >=  <=
 - 결과는 참(1) 또는 거짓(0)
     ex) (3 >= 2) + 5 = 1 + 5 = 6
 - 주의!! (x = y) 와 (x == y) 는 완전히 다름 (시험 단골)
     (x = y)  : y 값을 x에 대입, 수식의 값은 x의 값 (0이 아니면 참)
     (x == y) : 같으면 1, 다르면 0

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;

	printf("Enter two integers: ");
	scanf("%d %d", &x, &y);

	printf("Result of x == y: %d\n", x == y);	// 같으면 1
	printf("Result of x != y: %d\n", x != y);	// 다르면 1
	printf("Result of x > y: %d\n", x > y);
	printf("Result of x < y: %d\n", x < y);
	printf("Result of x >= y: %d\n", x >= y);
	printf("Result of x <= y: %d\n", x <= y);

	return 0;
}
