/*

 [개념 정리 - while 문으로 구구단 한 단 출력]
 - 사용자가 입력한 단 n 에 대해 i = 1 ~ 9 반복
 - 2장 lec2-gugudan 처럼 printf 9번 쓸 필요 없음

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	int i = 1;

	printf("Enter the multiplication table number: ");
	scanf("%d", &n);

	while (i <= 9)	// 1 ~ 9
	{
		printf("%d*%d = %d \n", n, i, n * i);
		i++;
	}

	return 0;
}
