/*

 [개념 정리 - 배열에 입력받고 평균 계산]
 - 배열 요소에 입력 : scanf("%d", &scores[i]);   <- 배열 요소도 & 필요
 - 학생 수만큼 변수를 따로 만들 필요 없이 배열 + 반복문으로 처리
 - 정수 평균 : sum / STUDENTS -> 정수 나눗셈 (소수점 버림)
     정확한 평균이 필요하면 (double)sum / STUDENTS

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5

int main(void) {
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++)
	{
		printf("Enter student score: ");
		scanf("%d", &scores[i]);	// 배열 요소에 입력
	}

	for (i = 0; i < STUDENTS; i++)
		sum += scores[i];	// 합계

	average = sum / STUDENTS;	// 정수 나눗셈
	printf("Average score = %d\n", average);

	return 0;
}
