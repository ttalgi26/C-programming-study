/*

 [개념 정리 - 구조체 배열로 4지 선다 퀴즈]
 - struct QUESTION : 문제, 보기 4개(문자열), 정답 번호(int) 를 하나로 묶음
 - bank[100] : 문제 은행 (구조체 배열), 2개만 초기화 -> 나머지는 0 (빈 문자열)
 - bank[i].question, bank[i].solution 처럼 배열[인덱스].멤버 로 접근

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

struct QUESTION {
	char question[SIZE];
	char item1[SIZE];
	char item2[SIZE];
	char item3[SIZE];
	char item4[SIZE];
	int solution;	// 정답 번호
};

struct QUESTION bank[100] = {	// 문제 은행
	{ "Best programming language for embedded devices?", "1. Python", "2. Java", "3. C", "4. Javascript", 3 },
	{ "Which construct can group different data types?", "1. Array", "2. Variable", "3. Structure", "4. Pointer", 3 },
};

int main(void)
{
	int select, i;

	for (i = 0; i < 2; i++) {
		printf("%s\n", bank[i].question);
		printf("%s ", bank[i].item1);
		printf("%s ", bank[i].item2);
		printf("%s ", bank[i].item3);
		printf("%s ", bank[i].item4);
		scanf("%d", &select);

		if (select == bank[i].solution)
			printf("Correct.\n\n");
		else
			printf("Wrong.\n\n");
	}

	return 0;
}
