/*

 [개념 정리 - swap() 함수 두 가지 버전] (시험 단골)
 - swap1 (값에 의한 호출) : x, y 는 a, b 의 복사본 -> 복사본끼리만 바뀜 -> 실패
     after swap1(), a=100 b=200
 - swap2 (참조에 의한 호출) : 주소를 받아서 *px, *py 로 원본을 바꿈 -> 성공
     after swap2(), a=200 b=100
 - 함수는 return 으로 값을 하나만 돌려줄 수 있음
     -> 두 개 이상의 값을 바꾸려면 포인터(주소)를 넘겨야 함

*/

#include <stdio.h>

void swap1(int x, int y)	// 값에 의한 호출
{
	int tmp;

	tmp = x;
	x = y;
	y = tmp;	// 복사본만 바뀜
}

void swap2(int* px, int* py)	// 참조에 의한 호출
{
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;	// 원본이 바뀜
}

int main(void) {
	int a = 100, b = 200;

	printf("before swap(), a=%d b=%d\n", a, b);

	swap1(a, b);	// 값을 보냄
	printf("after swap1(), a=%d b=%d\n", a, b);	// 그대로

	swap2(&a, &b);	// 주소를 보냄
	printf("after swap2(), a=%d b=%d\n", a, b);	// 바뀜

	return 0;
}
