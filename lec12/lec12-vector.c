/*

 [개념 정리 - 구조체를 인수로 받고 구조체를 반환하는 함수]
 - 반환형이 struct vector -> 함수가 구조체를 통째로 돌려줌
     (return 은 값을 하나만 돌려줄 수 있지만, 구조체로 묶으면 x, y 두 값을 한 번에)
 - 함수 원형에도 struct vector 자료형 그대로 사용
 - (2, 3) + (5, 6) = (7, 9)

*/

#include <stdio.h>

struct vector {
	float x;
	float y;
};

struct vector get_vector_sum(struct vector a, struct vector b);	// 함수 원형

int main(void)
{
	struct vector a = { 2.0, 3.0 };
	struct vector b = { 5.0, 6.0 };
	struct vector sum;

	sum = get_vector_sum(a, b);	// 반환된 구조체를 대입
	printf("The vector sum is (%f, %f).\n", sum.x, sum.y);

	return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
	struct vector result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;	// 구조체 반환
}
