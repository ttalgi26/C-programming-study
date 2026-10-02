#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double celsius, fahrenheit;

	printf("Fahrenheit temperature=");
	scanf("%lf", &fahrenheit);	//부동소수점형으로 입력받는다.

	celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
	printf("Celsius temperature=%lf\n", celsius);

	return 0;
}
