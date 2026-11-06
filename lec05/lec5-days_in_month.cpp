/*

 [개념 정리 - switch 문]
 - 여러 가지 경우 중 하나를 선택할 때 사용
     switch (제어식) {
         case 값1: 문장; break;
         case 값2: 문장; break;
         default: 문장; break;
     }
 - 제어식의 값과 일치하는 case로 이동해서 실행, break 만나면 switch 탈출
 - break 생략 시 -> 다음 case 문장까지 계속 실행됨 (fall through) (시험 단골!)
 - 의도적인 break 생략 : 여러 case가 같은 동작을 할 때 (아래 4, 6, 9, 11월)
 - default : 어떤 case와도 일치하지 않을 때 실행
 - case 뒤에는 정수 상수(문자 포함)만 가능, 실수/변수/범위 X

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int month, days;
	printf("Enter the month number: ");
	scanf("%d", &month);

	switch (month) {
		case 2:
			days = 28;
			break;
		case 4:	// break 없음 -> 아래로 내려감 (의도적인 생략)
		case 6:
		case 9:
		case 11:
			days = 30;	// 4, 6, 9, 11월 모두 여기 실행
			break;
		default:	// 나머지 달
			days = 31;
			break;
	}

	printf("Month %d has %d days.\n", month, days);

	return 0;
}
