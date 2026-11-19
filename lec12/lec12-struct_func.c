/*

 [개념 정리 - 구조체와 함수]
 - 구조체를 인수나 반환값으로 쓰면 "값에 의한 호출" 이 적용됨
     -> 구조체 전체가 복사되어 전달 (함수 안에서 바꿔도 원본은 그대로)
 - equal() : 구조체 2개를 인수로 받아 이름이 같은지 비교 (strcmp)
 - make_student() : 함수 안에서 구조체를 채워서 반환값으로 돌려줌
 - 교재에는 조각 코드만 있어서 실행할 수 있게 만든 코드
   교재 make_student 는 struct student 에 없는 s.age 를 쓰고, double grade 를 %f 로 입력해서
   학번(number), %lf 로 맞춤

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int equal(struct student s1, struct student s2)	// 구조체를 인수로
{
	if (strcmp(s1.name, s2.name) == 0)
		return 1;
	else
		return 0;
}

struct student make_student(void)	// 구조체를 반환
{
	struct student s;

	printf("ID:");
	scanf("%d", &s.number);
	printf("Name:");
	scanf("%s", s.name);
	printf("GPA:");
	scanf("%lf", &s.grade);

	return s;	// 구조체 전체가 복사되어 반환
}

int main(void)
{
	struct student a = make_student();
	struct student b = make_student();

	if (equal(a, b))
		printf("Same name.\n");
	else
		printf("Different name.\n");

	return 0;
}
