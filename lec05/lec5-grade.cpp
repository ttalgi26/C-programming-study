/*

 [개념 정리 - 연속적인 if (else if)]
 - if ~ else if ~ else if ~ else : 3개 이상의 조건에 대해 서로 다른 코드 실행
 - 위에서부터 차례로 검사, 처음으로 참인 조건의 문장만 실행하고 나머지는 건너뜀
 - 그래서 score >= 80 검사할 때 이미 score < 90 인 게 보장됨 (조건 순서 중요!)
 - char 변수에는 문자 상수 'A' (작은따옴표) 저장, 출력은 %c

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int score;
	char grade;	// 학점 문자
	printf("Enter score: ");
	scanf("%d", &score);

	if (score >= 90)
		grade = 'A';
	else if (score >= 80)	// 여기 오면 이미 90 미만
		grade = 'B';
	else if (score >= 70)
		grade = 'C';

	else if (score >= 60)
		grade = 'D';
	else	// 위 조건이 모두 거짓이면
		grade = 'F';

	printf("Grade %c\n", grade);

	return 0;
}
