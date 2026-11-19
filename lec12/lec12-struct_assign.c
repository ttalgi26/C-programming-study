/*

 [개념 정리 - 구조체 변수의 대입과 비교] (시험 단골)
 - 대입은 가능 (권장) : p2 = p1;   -> 모든 멤버가 한꺼번에 복사됨
     (배열은 = 로 대입 불가였지만 구조체는 가능!)
 - 비교는 불가능 : if (p1 == p2)   -> 컴파일 오류
     -> 멤버끼리 하나씩 비교해야 함 : if (p1.x == p2.x && p1.y == p2.y)
 - 교재에는 조각 코드만 있어서 실행해볼 수 있게 만든 코드

*/

#include <stdio.h>

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p1 = { 10, 20 };
	struct point p2 = { 30, 40 };

	p2 = p1;	// 구조체 변수 끼리의 대입 연산은 가능하다.
	printf("p2=(%d, %d)\n", p2.x, p2.y);	// (10, 20)

	// if (p1 == p2)	// 컴파일 오류! 구조체는 == 로 비교 불가
	if (p1.x == p2.x && p1.y == p2.y)	// 멤버끼리 비교
		printf("p1 and p2 are equal.\n");

	return 0;
}
