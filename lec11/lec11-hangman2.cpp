/*

 ★★★ [기말 대비] 행맨 도전문제 버전 ★★★
 - 교재 도전문제
     (1) 여러 개의 문자열 중에서, 하나를 정답으로 선택하도록 업그레이드
     (2) solution 문자열에서 "____ __ ____" 같은 빈칸 문자열(answer)을 자동으로 생성
 - 교재에 풀이가 없어서 직접 작성함

 [(1) 여러 단어 중 하나 고르기]
 - 문자열의 배열(2차원 char 배열) words[5][100] 에 문제들을 저장
 - rand() % 5 로 0 ~ 4 중 하나 선택 -> strcpy(solution, words[k]);
     배열에는 = 로 문자열 대입 불가 -> strcpy 사용!

 [(2) 빈칸 문자열 자동 생성]
 - solution 을 '\0' 까지 훑으면서
     공백이면 answer[i] = ' ',  아니면 answer[i] = '_'
 - 마지막에 answer[i] = '\0';  <- 반드시! (빠뜨리면 strcmp, printf 가 쓰레기까지 읽음)

 - 틀린 횟수(miss)도 세서 출력 (추가 기능)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctime>

#define WORDS 5

int main(void) {
	char words[WORDS][100] = {	// 문자열의 배열
		"meet at midnight",
		"apple",
		"computer programming",
		"hello world",
		"pointer"
	};
	char solution[100];
	char answer[100];
	char ch;
	int i, found, miss = 0;

	srand(time(NULL));
	strcpy(solution, words[rand() % WORDS]);	// (1) 정답 하나 선택 (strcpy 로 복사)

	for (i = 0; solution[i] != '\0'; i++) {	// (2) 빈칸 자동 생성
		if (solution[i] == ' ')
			answer[i] = ' ';	// 공백은 그대로
		else
			answer[i] = '_';	// 글자는 빈칸으로
	}
	answer[i] = '\0';	// 문자열 끝 표시 (i 는 solution 의 길이)

	while (1) {
		printf("\nCurrent string: %s  (miss: %d)\n", answer, miss);
		printf("Guess a letter: ");
		ch = _getch();

		found = 0;
		for (i = 0; solution[i] != '\0'; i++) {
			if (solution[i] == ch) {
				answer[i] = ch;
				found = 1;	// 하나라도 맞음
			}
		}
		if (found == 0) miss++;	// 틀린 횟수

		if (strcmp(solution, answer) == 0) break;
	}

	printf("\nCurrent string: %s \n", answer);
	printf("Congratulations! (miss: %d)\n", miss);

	return 0;
}
