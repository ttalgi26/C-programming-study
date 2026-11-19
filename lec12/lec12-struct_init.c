/*

 [개념 정리 - 구조체의 초기화]
 - 중괄호 { } 안에 멤버 순서대로 초기값 나열 (배열 초기화와 비슷)
     struct student s1 = { 24, "Kim", 4.3 };
 - 초기화 방법 4가지
     ① struct point p = { 1, 2 };            // 순서대로 x=1, y=2
     ② struct point q = { .y = 2, .x = 1 };  // 멤버 이름 지정 (순서 상관 없음)
     ③ struct point r = p;                   // 다른 구조체 변수로 초기화 (복사)
     ④ r = (struct point){ 1, 2 };           // C99 : 선언 후에 한꺼번에 대입

*/

#include <stdio.h>

// 2차원 공간의 점을 구조체로 나타낸다.
struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p = { 1, 2 };	// ①
	struct point q = { .y = 2, .x = 1 };	// ②
	struct point r = p;	// ③

	r = (struct point){ 1, 2 };	// ④ C99 버전

	printf("p=(%d, %d) \n", p.x, p.y);
	printf("q=(%d, %d) \n", q.x, q.y);
	printf("r=(%d, %d) \n", r.x, r.y);

	return 0;
}
