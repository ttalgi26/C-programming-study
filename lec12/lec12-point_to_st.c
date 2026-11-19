/*

 [개념 정리 - 구조체와 포인터, -> 연산자] (시험 단골)
 - 구조체를 가리키는 포인터 : struct student *p;  p = &s;
 - 포인터로 멤버 참조 2가지 (결과 같음)
     (*p).number    <- 괄호 필수!
     p->number      <- -> (간접 멤버 연산자), 더 많이 씀
 - 주의 : *p.number 는 *(p.number) 로 해석됨 ( . 이 * 보다 우선) -> 오류
     그래서 (*p).number 처럼 괄호를 쓰거나 p->number 를 씀
 - 세 줄 모두 같은 결과 출력

*/

#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student s = { 20070001, "Hong", 4.3 };
	struct student* p;	// 구조체 포인터

	p = &s;	// p가 s를 가리킴

	printf("ID=%d Name=%s GPA=%f \n", s.number, s.name, s.grade);	// 구조체 변수
	printf("ID=%d Name=%s GPA=%f \n", (*p).number, (*p).name, (*p).grade);	// (*p).멤버
	printf("ID=%d Name=%s GPA=%f \n", p->number, p->name, p->grade);	// p->멤버

	return 0;
}
