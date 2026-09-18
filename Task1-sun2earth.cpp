#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double light_speed = 300000;
	double distance = 149600000;
	int time_min;
	int time_sec;
	time_min = int(distance / light_speed);
	time_min = time_min / 60;
	time_sec = int(distance / light_speed - int(time_min) * 60);

	printf("lightspeed = %lf km/s\n", light_speed);
	printf("sun to earth distance = %lf km\n", distance);
	printf("time : %d min, %d sec", time_min, time_sec);

	return 0;
}
