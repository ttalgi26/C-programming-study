/*

 [개념 정리 - 포인터로 좌표 바꾸기 (어드벤처 게임)] (9장 Mini Project)
 - 교재에는 실행 화면만 있고 코드가 없어서 직접 작성함
 - 10x10 맵, 주인공 '#', 금 'G', 몬스터 'M' 2마리
     w(위) s(아래) a(왼쪽) d(오른쪽) 으로 이동, 금을 찾으면 승리, 몬스터와 만나면 패배
 - move(&x, &y, ...) : x, y 두 값을 함수 안에서 바꿔야 하므로 주소를 넘김 (참조에 의한 호출)
     return 으로는 값을 하나만 돌려줄 수 있어서 포인터 사용
 - 몬스터는 rand() % 4 로 랜덤 방향 이동
 - _getch() : 엔터 없이 키 하나 입력 (<conio.h>, Windows),  system("cls") : 화면 지우기

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>	// _getch()
#include <ctime>
#define SIZE 10

void move(int* x, int* y, char dir);
void draw(int hx, int hy, int mx[], int my[], int n, int gx, int gy);

int main(void) {
	int hx = 0, hy = 1;	// 주인공 위치 (x: 열, y: 행)
	int gx = 9, gy = 9;	// 금 위치
	int mx[2] = { 5, 7 };	// 몬스터 x 좌표
	int my[2] = { 5, 6 };	// 몬스터 y 좌표
	char key;
	const char dirs[4] = { 'w', 's', 'a', 'd' };

	srand(time(NULL));

	while (1) {
		system("cls");
		printf("left:a, right:d, up:w, down:s\n");
		draw(hx, hy, mx, my, 2, gx, gy);

		key = _getch();	// 키 하나 입력
		move(&hx, &hy, key);	// 주소를 넘겨서 주인공 좌표 변경

		for (int i = 0; i < 2; i++)
			move(&mx[i], &my[i], dirs[rand() % 4]);	// 몬스터 랜덤 이동

		if (hx == gx && hy == gy) {	// 금 발견
			system("cls");
			draw(hx, hy, mx, my, 2, gx, gy);
			printf("You found the gold!\n");
			break;
		}
		for (int i = 0; i < 2; i++) {
			if (hx == mx[i] && hy == my[i]) {	// 몬스터와 만남
				system("cls");
				draw(hx, hy, mx, my, 2, gx, gy);
				printf("Caught by a monster. Game over.\n");
				return 0;
			}
		}
	}

	return 0;
}

// 방향에 따라 좌표를 바꾼다 (맵 밖으로는 못 나감)
void move(int* x, int* y, char dir)
{
	if (dir == 'w' && *y > 0) (*y)--;	// (*y)-- : 가리키는 값을 감소 (*y-- 와 다름!)
	else if (dir == 's' && *y < SIZE - 1) (*y)++;
	else if (dir == 'a' && *x > 0) (*x)--;
	else if (dir == 'd' && *x < SIZE - 1) (*x)++;
}

// 맵을 그린다
void draw(int hx, int hy, int mx[], int my[], int n, int gx, int gy)
{
	for (int y = 0; y < SIZE; y++) {
		for (int x = 0; x < SIZE; x++) {
			char c = '.';
			if (x == gx && y == gy) c = 'G';
			for (int i = 0; i < n; i++)
				if (x == mx[i] && y == my[i]) c = 'M';
			if (x == hx && y == hy) c = '#';
			printf("%c", c);
		}
		printf("\n");
	}
}
