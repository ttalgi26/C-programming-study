/*

 [개념 정리 - 복합문(블록)]
 - 복합문(compound statement) = 중괄호 { } 로 여러 문장을 묶은 것, 블록(block)이라고도 함
 - 조건이 참일 때 2개 이상의 문장을 실행하려면 반드시 { } 로 묶어야 함
 - 주의 1) 중괄호 없이 들여쓰기만 하면 첫 문장만 if에 포함됨
       if (score >= 90)
           printf("You passed.\n");
           printf("Scholarship eligible.\n");   <- 조건과 상관없이 항상 실행됨!
 - 주의 2) if 뒤에 세미콜론 붙이면 안 됨
       if (x > 0);                <- 빈 문장이 if의 몸체가 됨
           printf("positive\n");  <- 항상 실행됨!

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score;
	printf("Enter score: ");
	scanf("%d", &score);

	if (score >= 60) {	// 성적이 60점 이상이면 블록 안 2문장 실행
		printf("You passed.\n");
		printf("You can also receive a scholarship.");
	}
	else {	// 그렇지 않으면
		printf("You failed.\n");
		printf("Try again.\n");
	}

	return 0;
}
