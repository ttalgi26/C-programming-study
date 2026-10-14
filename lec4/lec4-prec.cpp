/*

 [개념 정리 - 연산자 우선순위와 결합 규칙] (시험 단골)
 - 우선순위 : 어떤 연산자를 먼저 계산할지에 대한 규칙
     괄호 () 가 가장 높음
     콤마 < 대입 < 논리 < 관계 < 산술 < 단항
     단항 연산자(++, --, !, ~, 형변환) > 이항 연산자
     콤마를 제외하면 대입 연산자가 가장 낮음
     * / %  가  + -  보다 높음
 - 결합 규칙 : 우선순위가 같은 연산자가 여러 개일 때 계산 방향
     대부분 왼쪽 -> 오른쪽 (a * b / c -> (a * b) / c)
     단항 연산자, 대입 연산자는 오른쪽 -> 왼쪽 (a = b = 1 -> a = (b = 1))
 - 헷갈리면 괄호 쓰기

*/

#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 3;
	int result;

	result = a + b * c / d;	// 10 + ((20*30)/3) = 10 + 200 = 210
	printf("Result: %d\n", result);

	result = (a + b) * c / d;	// (30*30)/3 = 300
	printf("Result: %d\n", result);

	result = a = b = 1;	// 오른쪽부터 : b=1 -> a=1 -> result=1
	printf("Result: %d\n", result);

	return 0;
}
