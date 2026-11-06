/*

 [개념 정리 - for 문] (시험 단골)
 - for (초기식; 조건식; 증감식) 반복할 문장;
     실행 순서 : 초기식(1번만) -> 조건식 검사 -> 문장 실행 -> 증감식 -> 조건식 검사 -> ...
 - 정해진 횟수만큼 반복할 때 사용 (횟수 제어 반복)
 - while 문과 동일하게 바꿀 수 있음
     i = 1;                       for (i = 1; i <= 10; i++)
     while (i <= 10) {                sum += i;
         sum += i;
         i++;
     }
 - for 문 주의사항
     조건식에 논리 연산자 사용 가능 : for (i = 0; i < 100 && sum < 2000; i++)
     세 부분 모두 생략 가능 -> for ( ; ; ) 는 무한 루프
     감소도 가능 : for (i = 10; i > 0; i--)
     반복할 문장이 2줄 이상이면 { } 필수
     for (...); 처럼 세미콜론 붙이면 빈 문장만 반복됨

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, sum;

	sum = 0;
	for (i = 1; i <= 10; i++)	// i는 1부터 10까지 증가
		sum += i;	// sum = sum + i;와 같음

	printf("Sum of integers from 1 to 10 = %d\n", sum);	// 55

	return 0;
}
