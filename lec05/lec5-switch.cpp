/*

 [개념 정리 - switch 문과 break 생략] (시험 단골)
 - break 가 있으면 해당 case만 실행하고 switch 탈출
 - break 가 없으면 아래 case 문장들까지 계속 실행 (fall through)
     number = 1 일 때 case 1에 break가 없으면 -> "One" "Two" 둘 다 출력
 - switch 문은 if-else if 로 바꿀 수 있음
     if (number == 0) ... else if (number == 1) ... else ...
 - 중간점검 예제
     switch(fruit) { case 1: printf("apple"); break;
                     case 2: printf("pear");          <- break 없음
                     case 3: printf("banana"); break;
                     default: printf("fruit"); }
     fruit = 2 이면 "pearbanana" 출력

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number;

	printf("Enter an integer: ");
	scanf("%d", &number);

	switch (number) {
		case 0:
			printf("None\n");
			break;
		case 1:
			printf("One\n");
			break;
		case 2:	// break 없음 -> case 3과 같은 문장 실행 (의도적인 생략)
		case 3:
			printf("Several\n");
			break;
		default:	// 어떤 case와도 일치하지 않을 때
			printf("Many\n");
			break;
	}

	return 0;
}
