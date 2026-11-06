/*

 [개념 정리 - 배열을 처리하는 함수]
 - 배열 매개변수 : int values[]  ==  int *values  (둘 다 주소를 받음)
 - 함수 안에서는 배열의 크기를 알 수 없음 -> 크기 n 을 따로 넘겨야 함
 - get_array_avg() : 배열 요소의 평균을 double 로 반환
     sum 을 double 로 해야 sum / n 이 실수 나눗셈
 - print_array() : 배열 요소 출력 (반환값 없음 -> void)

*/

#include <stdio.h>
#define SIZE 5

double get_array_avg(int values[], int n);	// 함수 원형
void print_array(int values[], int n);

int main(void) {
	int data[SIZE] = { 10, 20, 30, 40, 50 };
	double result;

	print_array(data, SIZE);	// 배열 이름(주소)과 크기 전달
	result = get_array_avg(data, SIZE);
	printf("average of array elements = %lf\n", result);

	return 0;
}

// 배열 요소의 평균을 계산하는 함수
double get_array_avg(int values[], int n)
{
	int i;
	double sum = 0.0;	// double -> 실수 나눗셈

	for (i = 0; i < n; i++)
		sum += values[i];

	return sum / n;
}

// 배열 요소를 화면에 출력하는 함수
void print_array(int values[], int n)
{
	int i;

	printf("[ ");
	for (i = 0; i < n; i++)
		printf("%d ", values[i]);
	printf("]\n");
}
