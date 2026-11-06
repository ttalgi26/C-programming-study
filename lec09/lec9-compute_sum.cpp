/*

 [개념 정리 - 함수 원형(function prototype)] (시험 단골)
 - 함수 원형 : 컴파일러에게 함수에 대하여 미리 알리는 것
     형식 : 반환형 함수이름(매개변수 목록);    <- 끝에 세미콜론!
 - 컴파일러는 위에서 아래로 읽기 때문에, main() 보다 아래에 정의된 함수를 호출하려면
   main() 위에 원형을 선언해야 함 (없으면 컴파일 에러/경고)
 - 원형에서는 매개변수 이름 생략 가능 : int compute_sum(int);
 - 함수를 main() 위에 먼저 정의하면 원형이 없어도 됨

*/

#include <stdio.h>

int compute_sum(int n);	// 함수 원형

int main(void) {
	int sum;

	sum = compute_sum(100);	// 원형 덕분에 아래에 정의된 함수 호출 가능
	printf("Sum from 1 to 100 = %d \n", sum);

	return 0;
}

int compute_sum(int n)	// 함수 정의
{
	int i, result = 0;	// 지역 변수

	for (i = 1; i <= n; i++)
		result += i;

	return result;
}
