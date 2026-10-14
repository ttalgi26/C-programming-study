/*

 [개념 정리 - NIM 게임 (while + continue + 난수)] (6장 Mini Project)
 - 스틱 12개, 사용자와 컴퓨터가 번갈아 1 ~ 3개씩 가져감, 마지막 스틱을 가져가면 패배
 - while (sticks > 0) : 스틱이 남아있는 동안 반복
 - continue : 잘못된 입력(1~3 아님)이면 아래를 건너뛰고 다시 입력받음
 - 컴퓨터는 rand() % 4 -> 0 ~ 3개 (교재 코드 그대로)
 - 남은 스틱보다 많이 가져갈 수 없게 조정

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

int main(void) {
	int sticks = 12;
	int n, computer;

	srand(time(NULL));	// 난수의 씨앗값을 현재 시간으로
	printf("Current number of sticks: %d\n", sticks);

	while (sticks > 0)
	{
		printf("How many sticks would you like to take? : ");
		scanf("%d", &n);

		if (n < 1 || n > 3) {	// 잘못된 입력
			printf("You can take 1 to 3 sticks.\n\n");
			continue;	// 다시 입력받기
		}
		sticks -= n;

		computer = rand() % 4;	// 0 ~ 3
		if (sticks < computer) computer = sticks;	// 남은 개수보다 많이 못 가져감
		sticks -= computer;

		printf("** The computer took %d stick(s).\n", computer);
		printf("Current number of sticks: %d\n\n", sticks);
	}

	return 0;
}
