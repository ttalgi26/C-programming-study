/*

 [개념 정리 - 난수 함수 rand(), srand()]
 - 난수(random number) : 규칙성 없이 임의로 생성되는 수 (암호학, 시뮬레이션, 게임)
 - rand() : 0 ~ RAND_MAX 사이의 난수 생성 (<stdlib.h>)
 - 범위 한정 : 1 + (rand() % 45)
     rand() % 45 -> 0 ~ 44,  여기에 1을 더해서 -> 1 ~ 45
     a ~ b 사이 난수 : a + rand() % (b - a + 1)
 - 시드(seed) : 난수 생성의 씨앗값
     시드가 같으면 실행할 때마다 같은 난수가 나옴 (srand 없이 rand()만 쓰면 매번 41 18467 6334 ...)
     srand(time(NULL)); -> 현재 시각을 시드로 사용 (실행할 때마다 시각이 다르니까)
     time(NULL) 은 <time.h>

*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45

int main(void) {
	int i;

	srand(time(NULL));	// 현재 시각을 시드로 설정 (이 줄을 지우면 매번 같은 결과)

	for (i = 0; i < 6; i++)
		printf("%d ", 1 + rand() % MAX);	// 1 ~ 45

	return 0;
}
