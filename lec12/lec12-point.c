/*

 [개념 정리 - 구조체로 점 표현, 두 점 사이 거리]
 - struct point 로 x, y 좌표를 하나로 묶음
 - 멤버에 scanf 로 입력 : &p1.x   ( . 이 & 보다 우선 -> &(p1.x) 와 같음)
 - 거리 = sqrt( (x1-x2)^2 + (y1-y2)^2 )   (<math.h> 의 sqrt)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2;	// 구조체 변수 2개
	double xdiff, ydiff;
	double dist;

	printf("Enter point coordinates (x y): ");
	scanf("%d %d", &p1.x, &p1.y);	// 멤버의 주소
	printf("Enter point coordinates (x y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;
	dist = sqrt(xdiff * xdiff + ydiff * ydiff);

	printf("The distance between the two points is %f.\n", dist);

	return 0;
}
