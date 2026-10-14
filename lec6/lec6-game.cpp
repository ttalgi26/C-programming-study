/*

 [개념 정리 - do-while 로 숫자 추측 게임]
 - 정답은 rand() % 100 -> 0 ~ 99
 - 사용자가 적어도 한 번은 입력해야 하므로 do-while 이 적합
 - guess != answer 인 동안 반복 -> 맞히면 루프 종료
 - tries 로 시도 횟수 세기
 - 이진 탐색처럼 범위를 반씩 줄이면 최대 7번 안에 맞힐 수 있음 (2^7 = 128 > 100)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

int main(void) {
	int answer;	// 정답
	int guess;	// 사용자 입력
	int tries = 0;	// 시도 횟수

	srand(time(NULL));
	answer = rand() % 100;	// 0 ~ 99

	do {
		printf("Guess the answer: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)	// 입력한 정수가 정답보다 높으면
			printf("Your guess is high.\n");
		if (guess < answer)	// 입력한 정수가 정답보다 낮으면
			printf("Your guess is low.\n");
	} while (guess != answer);	// 맞힐 때까지 반복

	printf("Congratulations. Number of tries=%d\n", tries);

	return 0;
}
