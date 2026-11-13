/*

 ★★★★★ [기말 출제] 행맨 게임 (교재 Title : hangman.c) ★★★★★
 - 개념 정리, 실행 과정 추적표, 예상 문제는 lec11/README.md 의 [기말 출제] 부분 참고

 [게임 규칙]
 - 빈칸("____ __ ________")으로 된 문자열이 주어지고, 사용자가 글자를 하나씩 추측
 - 맞힌 글자는 그 자리(들)에 보이게 되고, 전부 맞히면 종료

 [핵심 변수 2개]
 - solution[] : 정답 문자열        "meet at midnight"
 - answer[]   : 지금까지 맞춘 상태  "____ __ ________"
     -> 두 배열은 길이가 같고, 공백(' ')의 위치도 같아야 함
        (공백은 처음부터 answer 에 들어 있어서 맞힐 필요 없음)

 [동작 순서] (외우기!)
 1) answer 를 출력한다
 2) _getch() 로 글자 하나를 입력받는다 (엔터 없이 바로)
 3) for 문으로 solution 을 '\0' 까지 훑으면서
       solution[i] == ch 이면 answer[i] = ch    <- 같은 글자가 여러 개면 전부 공개 (break 없음!)
 4) strcmp(solution, answer) == 0 이면 다 맞힌 것 -> break
    (문자열은 == 로 비교 불가, 반드시 strcmp)

 [이 장에서 쓰인 개념]
 - 문자열 = char 배열 + '\0'  (반복 조건 solution[i] != '\0')
 - _getch() : <conio.h>, 버퍼 없이 바로 입력 (Windows)
 - strcmp() : <string.h>, 같으면 0
 - while (1) + break : 무한 루프 탈출

 - 교재 코드에 추가한 부분 : 끝났을 때 정답 문자열과 축하 메시지 출력 (교재는 그냥 종료)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>	// _getch()
#include <string.h>	// strcmp()

int main(void) {
	char solution[100] = "meet at midnight";	// 정답이 들어 있는 문자 배열
	char answer[100] = "____ __ ________";	// 현재까지 사용자가 맞춘 문자열 (공백 위치 같게!)
	char ch;
	int i;

	while (1) {
		printf("\nCurrent string: %s \n", answer);
		printf("Guess a letter: ");
		ch = _getch();	// 글자 하나 입력 (엔터 없이)

		// 사용자가 입력한 문자를 answer[]에 넣어서 정답을 비교한다.
		for (i = 0; solution[i] != '\0'; i++) {	// '\0' 이 나올 때까지 = 문자열 끝까지
			// 사용자가 맞추었으면 글자를 보이게 한다.
			if (solution[i] == ch)
				answer[i] = ch;	// 같은 위치에 공개 (여러 개면 전부)
		}

		if (strcmp(solution, answer) == 0) break;	// 정답과 일치하는지를 검사
	}

	printf("\nCurrent string: %s \n", answer);	// (추가) 완성된 문자열
	printf("Congratulations!\n");	// (추가)

	return 0;
}
