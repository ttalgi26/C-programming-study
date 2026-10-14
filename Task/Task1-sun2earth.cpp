/*

 [개념 정리 - 형변환 & 정수 나눗셈으로 분/초 나누기]
 - int(실수) : 실수를 정수로 변환 -> 소수점 이하 버림 (C 스타일은 (int)실수)
 - 전체 초 / 60 = 분,  전체 초 - 분 * 60 (= 전체 초 % 60) = 남은 초
 - 실수를 int 변수에 대입해도 자동으로 소수점 이하 버려짐 (내림 변환)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double light_speed = 300000;
	double distance = 149600000;
	int time_min;
	int time_sec;
	time_min = int(distance / light_speed);	// 전체 초 (정수로 변환)
	time_min = time_min / 60;	// 정수 나눗셈 -> 분
	time_sec = int(distance / light_speed - int(time_min) * 60);	// 남은 초

	printf("lightspeed = %lf km/s\n", light_speed);
	printf("sun to earth distance = %lf km\n", distance);
	printf("time : %d min, %d sec", time_min, time_sec);

	return 0;
}
