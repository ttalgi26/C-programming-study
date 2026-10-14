/*

 [개념 정리 - 가위바위보 승패 판단 (나머지 연산 활용)]
 - 가위 0, 바위 1, 보 2  ->  x를 이기는 것은 (x + 1) % 3
     가위(0)는 바위(1)에게, 바위(1)는 보(2)에게, 보(2)는 가위(0)에게 짐
 - (user + 1) % 3 == computer 이면 컴퓨터 승, 같으면 무승부, 나머지는 사용자 승
 - rand() % 3 : 0 ~ 2 사이 난수
 - 주의 : srand(time(NULL)); 이 없어서 실행할 때마다 컴퓨터가 같은 수를 냄
          (main 시작 부분에 srand(time(NULL)); 추가하면 매번 바뀜)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

int main(void) {

	int user, computer;


	printf("Welcome to the rock, paper, scissors game.\n");
	printf("Choose one (scissor-0, rock-1, paper-2)");
	scanf("%d", &user);

	computer = rand() % 3;	// 0 ~ 2
	printf("User= %d\n", user);
	printf("Computer = %d\n", computer);

	if ((user + 1) % 3 == computer)	// 컴퓨터가 사용자를 이기는 수
		printf("Computer wins \n");
	else if (computer == user)
		printf("Draw \n");
	else
		printf("User wins \n");

	return 0;
}
