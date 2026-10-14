/*

 [개념 정리 - 변수와 기호 상수]
 - 변수는 사용하기 전에 반드시 선언해야 함
 - 기호 상수 #define 이름 값  -> 환율이 바뀌면 이 줄만 고치면 됨 (변경 쉬움, 가독성 좋음)
 - 기호 상수 이름은 보통 대문자로 씀 (변수와 구분)
 - 변수 이름 규칙 (시험 단골)
     1) 알파벳, 숫자, 밑줄(_)만 사용   ex) money# (X)
     2) 첫 글자는 알파벳 또는 _ (숫자로 시작 X)   ex) 2nd_base (X)
     3) 중간에 공백 X
     4) 대소문자 구별 (index, Index, INDEX 모두 다른 변수)
     5) 키워드(예약어) 사용 X   ex) double, int (X)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define EXCHANGE_RATE 1500	//기호상수 정의

int main(void) {
	int usd;	// 달러화
	int krw;	// 원화
	printf("Enter USD Amount");
	scanf("%d", &usd);
	krw = EXCHANGE_RATE * usd;	// 원화로 환산
	printf("%d USD = %d KRW. \n", usd, krw);
	return 0;
}
