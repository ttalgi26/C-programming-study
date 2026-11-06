/*

 [개념 정리 - 배열의 선언과 인덱스] (시험 단골)
 - 배열 : 같은 자료형의 값 여러 개를 한꺼번에 저장하는 연속된 메모리 공간
 - 선언 : 자료형 배열이름[크기];   ex) int scores[5];
     int prices[60];  double costs[12];  char names[50];
 - 인덱스(index) : 배열 요소의 번호, 0 부터 시작!!
     int scores[5] -> scores[0] ~ scores[4]  (scores[5] 는 없음)
 - 배열 크기는 상수여야 함 (int n = 5; int a[n]; X  /  #define SIZE 5 사용 O)
 - 잘못된 인덱스(범위 밖) 접근 시 컴파일러가 검사해주지 않음 -> 다른 메모리를 망가뜨림
 - 배열의 가장 큰 장점 : 반복문으로 요소를 간편하게 처리할 수 있음

*/

#include <stdio.h>

int main(void) {
	int i;
	int scores[5];	// int형 5개짜리 배열 (인덱스 0 ~ 4)

	scores[0] = 10;
	scores[1] = 20;
	scores[2] = 30;
	scores[3] = 40;
	scores[4] = 50;	// 마지막 인덱스는 크기 - 1

	for (i = 0; i < 5; i++)	// i < 5 (i <= 5 로 쓰면 범위 초과!)
		printf("scores[%d]=%d\n", i, scores[i]);

	return 0;
}
