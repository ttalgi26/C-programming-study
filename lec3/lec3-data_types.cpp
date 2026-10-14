/*

 [개념 정리 - 용도에 맞는 자료형 선택] (3장 Mini Project)
 - 나이               -> int (또는 short)
 - 직원 아이디(1000명 이하) -> short 로 충분 (최대 32767)
 - 연간 생산량(100만개) -> int (short 범위 초과)
 - 우주의 별 개수(약 7 x 10^22) -> double (정수형 범위 초과, %lf 입력, %e 출력)
 - 글자 하나          -> char (%c)
 - 형식 지정자 : short %hd, int %d, double %lf, char %c
 - 주의!! %c 로 문자를 입력받을 때 입력 버퍼에 남아있는 줄바꿈 문자('\n')가 먼저 읽힘
     -> scanf(" %c", &ch); 처럼 %c 앞에 공백을 넣으면 공백/줄바꿈을 건너뜀

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int age;	// 나이
	short id;	// 직원 아이디 (1000 이하)
	int quantity;	// 연간 생산량 (100만개)
	double stars;	// 별의 개수 (매우 큰 수)
	char ch;	// 글자 하나

	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Age: %d\n", age);

	printf("Enter the employee ID: ");
	scanf("%hd", &id);	// short는 %hd
	printf("Employee ID: %hd\n", id);

	printf("Enter the production quantity: ");
	scanf("%d", &quantity);
	printf("Production quantity: %d\n", quantity);

	printf("Enter the number of stars: ");
	scanf("%lf", &stars);	// 7e22 처럼 지수 표기로 입력 가능
	printf("Number of stars: %e\n", stars);	// 지수 표기로 출력

	printf("Enter a character: ");
	scanf(" %c", &ch);	// %c 앞 공백 -> 버퍼에 남은 '\n' 무시
	printf("Character: %c\n", ch);

	return 0;
}
