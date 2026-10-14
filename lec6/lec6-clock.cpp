/*

 [개념 정리 - 무한 루프 while(1)]
 - while (1) : 조건이 항상 참 -> 무한 반복 (Ctrl + C 로 종료)
 - Sleep(ms) : 주어진 시간(밀리초) 동안 프로그램 정지 (Windows, <windows.h>)
     Sleep(1000) = 1초,  UNIX 에서는 sleep(초)
 - system("cls") : 화면 지우기 (Windows)
 - %02d : 2자리로 출력, 빈 자리는 0으로 채움 (5 -> 05)
 - 60초 -> 1분, 60분 -> 1시간, 24시간 -> 0시로 초기화

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void) {
	int hour, min, sec;
	hour = min = sec = 0;	// 연속 대입

	while (1) {	// 무한 루프
		system("cls");	// 화면을 지운다
		printf("%02d: %02d: %02d", hour, min, sec);
		sec++;
		if (sec == 60) { min++; sec = 0; }
		if (min == 60) { hour++; min = 0; }
		if (hour == 24) { hour = min = sec = 0; }
		Sleep(1000);	// 1초 동안 프로그램을 재운다
	}

	return 0;
}
