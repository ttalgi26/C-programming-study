/*

 [개념 정리 - 포인터 연산] (시험 단골)
 - 가능한 연산 : 증가(++), 감소(--), 덧셈(+), 뺄셈(-)
 - 포인터를 1 증가시키면 "가리키는 자료형의 크기만큼" 증가 (1이 아님!)
     char*   -> +1  (char 1바이트)
     int*    -> +4  (int 4바이트)
     double* -> +8  (double 8바이트)
 - p + 2 -> 자료형 크기 x 2 만큼 증가
 - 교재처럼 %d 로 포인터 값을 출력 (x64 로 빌드하면 경고가 뜰 수 있지만 10000 은 그대로 출력됨)

*/

#include <stdio.h>

int main(void) {
	char* pc;
	int* pi;
	double* pd;

	pc = (char*)10000;	// 실제 변수가 아니라 연산 결과 확인용 주소
	pi = (int*)10000;
	pd = (double*)10000;

	printf("before increment pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	pc++;	// 10001 (+1)
	pi++;	// 10004 (+4)
	pd++;	// 10008 (+8)

	printf("after increment pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	printf("pc+2 = %d, pi+2 = %d, pd+2 = %d\n", pc + 2, pi + 2, pd + 2);	// +2, +8, +16

	return 0;
}
