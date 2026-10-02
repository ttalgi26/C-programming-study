#include <stdio.h>

int main(void) {
	double light_speed = 300000;
	double distance = 149600000;
	double time;

	time = distance / light_speed;
	time = time / 60.0;

	printf("Light speed = %lf km/s \n", light_speed);
	printf("Sun-Earth distance = %lf km \n", distance);
	printf("Travel time = %lf min \n", time);

	return 0;
}
