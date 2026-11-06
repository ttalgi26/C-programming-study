/*

 [개념 정리 - 정수형 자료형과 오버플로우]
 - 정수형 크기 (비주얼 스튜디오 기준)
     short 2바이트 (-32768 ~ 32767)
     int   4바이트 (약 -21억 ~ 21억)
     long  4바이트 (int와 같음)
     long long 8바이트 (약 ±922경)
 - 오버플로우 : 변수가 저장할 수 있는 범위를 넘으면 엉뚱한 값(음수 등)이 됨
     int로 계산하면 1000만원 * 12 * 30 = 36억 -> int 범위(약 21억) 초과 -> 음수 출력
 - 해결 : 더 큰 자료형 long long 사용, 입출력 형식 지정자는 %lld

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define EXCHANGE_RATE 1500	//기호상수 정의

int main(void) {
  long long int property;  //int만 쓸경우 오버플로우 방지
	long long int saving;

	printf("Enter monthly saving : ");
	scanf("%lld", &saving);	// long long은 %lld
	property = saving * 12 * 30;
	printf("Property after 30 years = %lld KRW \n", property);
	return 0;
}
