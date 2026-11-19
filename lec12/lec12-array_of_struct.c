/*

 [개념 정리 - 구조체 배열] (시험 단골)
 - 구조체를 여러 개 저장 : struct student list[100];
 - 접근 : 배열이름[인덱스].멤버
     list[2].number = 27;
     strcpy(list[2].name, "Hong Gil-dong");
 - 초기화 : 중괄호 안에 구조체별로 중괄호
     struct student list[3] = {
         { 1, "Park", 172.8 },
         { 2, "Kim", 179.2 },
         { 3, "Lee", 180.3 }
     };
 - scanf 입력
     &list[i].number   <- 정수 멤버는 & 필요
     list[i].name      <- 문자열(배열) 멤버는 & 없음
     &list[i].grade    <- double 은 %lf

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[SIZE];	// 구조체 배열
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("Enter student ID: ");
		scanf("%d", &list[i].number);
		printf("Enter name: ");
		scanf("%s", list[i].name);	// 문자열은 & 없음
		printf("Enter GPA(real number): ");
		scanf("%lf", &list[i].grade);
		printf("\n");
	}

	printf("\n========================================\n");
	for (i = 0; i < SIZE; i++)
		printf("ID: %d, Name: %s, GPA: %f\n", list[i].number, list[i].name, list[i].grade);
	printf("========================================\n");

	return 0;
}
