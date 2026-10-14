/*

 [개념 정리 - 난수 rand(), srand()]
 - rand() : 0 ~ RAND_MAX(32767) 사이의 난수를 반환 (<stdlib.h>)
 - rand() % n : 0 ~ n-1 사이의 난수   ex) rand() % 2 -> 0 또는 1
 - srand(time(NULL)) : 현재 시간을 난수의 씨앗값(seed)으로 설정 (<time.h>)
     srand() 안 하면 실행할 때마다 항상 같은 난수가 나옴!
 - srand()는 프로그램 시작 시 한 번만 호출

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctime>

int main(void) {

	printf("Starting the coin toss game.\n");
	srand(time(NULL));	// 현재 시간을 난수의 씨앗값으로

	int coin = rand() % 2;	// 0 또는 1
	if (coin == 0)
		printf("Heads.\n");
	else
		printf("Tails.\n");
	return 0;
}
