/*

 [개념 정리 - 버블 정렬 과정 그래픽으로 보기]
 - 버블 정렬 1회(pass)가 끝날 때마다 배열 값을 * 막대로 출력
 - list[i] / 10 개의 * 출력 -> 값이 클수록 긴 막대
 - system("cls") : 화면 지우기 (Windows)
 - _getch() : 키 하나 누를 때까지 대기 (<conio.h>, Windows)

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>	// _getch()
#include <windows.h>
#define SIZE 10

int main(void) {
	int list[SIZE] = { 100, 30, 20, 78, 89, 12, 56, 38, 99, 66 };

	for (int k = 0; k < SIZE; k++) {
		system("cls");	// 화면을 지운다

		for (int i = 0; i < SIZE - 1; i++) {	// 버블 정렬 1회
			if (list[i] > list[i + 1]) {
				int tmp = list[i]; list[i] = list[i + 1]; list[i + 1] = tmp;
			}
		}

		for (int i = 0; i < SIZE; i++) {
			for (int m = 0; m < list[i] / 10; m++)	// 막대를 그린다
				printf("*");
			printf("\n");
		}
		_getch();	// 키를 누를 때까지 기다린다
	}

	return 0;
}
