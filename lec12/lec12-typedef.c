/*

 [개념 정리 - typedef] (시험 단골)
 - typedef : 새로운 자료형(type)을 정의(define)하는 것 (기존 자료형에 새 이름 붙이기)
     형식 : typedef 기존자료형 새자료형;
     typedef unsigned char BYTE;
     typedef int INT32;          INT32 i;   // int i; 와 같다
     typedef unsigned int UINT32;  UINT32 k; // unsigned int k; 와 같다
 - 구조체에 typedef -> 매번 struct 를 안 써도 됨
     typedef struct point {
         int x;
         int y;
     } POINT;                    // struct point 를 POINT 라는 이름으로
     POINT p;                    // == struct point p;
 - #define 과 차이 : typedef 는 컴파일러가 처리하는 "자료형" 이름, #define 은 단순 문자 치환

*/

#include <stdio.h>

typedef struct point {
	int x;
	int y;
} POINT;	// 새로운 자료형 이름

POINT translate(POINT p, POINT delta);	// struct point 대신 POINT

int main(void)
{
	POINT p = { 2, 3 };
	POINT delta = { 10, 10 };
	POINT result;

	result = translate(p, delta);
	printf("(%d, %d)+(%d, %d)->(%d, %d)\n", p.x, p.y, delta.x, delta.y, result.x, result.y);

	return 0;
}

POINT translate(POINT p, POINT delta)	// 점 이동
{
	POINT new_p;

	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}
