/*

 [개념 정리 - 로또 번호 생성 (중복 방지)]
 - 1 ~ 45 사이 난수 6개를 중복 없이 생성
 - dup_check[MAX + 1] : 번호가 이미 나왔는지 기록하는 배열 (인덱스 = 번호)
     크기를 46 으로 해야 dup_check[45] 사용 가능 (인덱스 0 은 안 씀)
 - 이미 나온 번호(dup_check[k] == 1)면 while 로 다시 뽑음
 - = { 0 } 으로 배열 전체를 0으로 초기화

*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45

int main(void) {
	int i, k, lotto[6] = { 0 };
	int dup_check[MAX + 1] = { 0 };	// 0 ~ 45, 모두 0 (아직 안 나옴)

	srand(time(NULL));
	for (i = 0; i < 6; i++)
	{
		k = 1 + (rand() % MAX);	// 1 ~ 45
		while (dup_check[k] == 1)	// 이미 나온 번호면
			k = 1 + (rand() % MAX);	// 다시 뽑기
		lotto[i] = k;
		dup_check[k] = 1;	// 나온 번호로 표시
		printf("%d ", lotto[i]);
	}

	return 0;
}
