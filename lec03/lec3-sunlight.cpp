/*

 [개념 정리 - 부동소수점형]
 - 매우 큰 수, 소수점이 있는 수는 부동소수점형(float, double) 사용
 - float 4바이트 (유효숫자 약 6~7자리), double 8바이트 (유효숫자 약 15~16자리)
 - 소수점 있는 상수(60.0)는 기본적으로 double형
 - 출력 : %f (float), %lf (double)
 - 도달 시간 = 거리 / 빛의 속도 (초) -> / 60.0 하면 분

*/

#include <stdio.h>

int main(void) {
	double light_speed = 300000;	// 빛의 속도 (km/s)
	double distance = 149600000;	// 태양-지구 거리 (km)
	double time;	// 도달 시간

	time = distance / light_speed;	// 초 단위
	time = time / 60.0;	// 초 -> 분

	printf("Light speed = %lf km/s \n", light_speed);
	printf("Sun-Earth distance = %lf km \n", distance);
	printf("Travel time = %lf min \n", time);

	return 0;
}
