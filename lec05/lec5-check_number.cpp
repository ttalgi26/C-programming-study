/*

 [개념 정리 - 논리 연산자 & 단축 연산]
 - && (AND) : 모두 참이어야 참     ex) 나이 30 이하 "그리고" 토익 700 이상
 - || (OR)  : 하나라도 참이면 참   ex) 나이 30 이하 "또는" 토익 700 이상
 - !  (NOT) : 참 <-> 거짓 반전     ex) !0 = 1, !5 = 0
 - 범위 검사 : 0 <= number <= 100 처럼 쓰면 안 됨!!
     -> (number >= 0 && number <= 100) 으로 써야 함
 - 여러 값 중 하나인지 : (x == 1) || (x == 2) || (x == 3)
 - 단축 연산(short-circuit) (시험 단골)
     && : 앞이 거짓이면 뒤는 계산 안 함   ex) (2 > 3) && (++x < 5) -> ++x 실행 안 됨
     || : 앞이 참이면 뒤는 계산 안 함
 - C에서 0이 아닌 값은 모두 참, 0은 거짓

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number;

	printf("Enter an integer: ");
	scanf("%d", &number);

	if (number >= 0 && number <= 100)	// 0 이상 "그리고" 100 이하
		printf("The entered integer is between 0 and 100. \n");
	else
		printf("The entered integer is not between 0 and 100. \n");

	return 0;
}
