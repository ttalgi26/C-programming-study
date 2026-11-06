/*

 [개념 정리 - 포인터 연산] (시험 단골)
 - 가능한 연산 : 증가(++), 감소(--), 덧셈(+), 뺄셈(-)
 - 포인터를 1 증가시키면 "가리키는 자료형의 크기만큼" 증가 (1이 아님!)
     char*   -> +1  (char 1바이트)
     int*    -> +4  (int 4바이트)
     double* -> +8  (double 8바이트)
 - p + 2 -> 자료형 크기 x 2 만큼 증가
 - 교재는 %d 로 포인터를 출력하지만 64비트에서 주소가 잘릴 수 있어서
   (unsigned long long) 으로 변환 후 %llu 로 출력

*/

#include <stdio.h>

int main(void) {
	char* pc;
	int* pi;
	double* pd;

	pc = (char*)10000;	// 실제 변수가 아니라 연산 결과 확인용 주소
	pi = (int*)10000;
	pd = (double*)10000;

	printf("before increment pc = %llu, pi = %llu, pd = %llu\n",
		(unsigned long long)pc, (unsigned long long)pi, (unsigned long long)pd);

	pc++;	// 10001 (+1)
	pi++;	// 10004 (+4)
	pd++;	// 10008 (+8)

	printf("after increment pc = %llu, pi = %llu, pd = %llu\n",
		(unsigned long long)pc, (unsigned long long)pi, (unsigned long long)pd);

	printf("pc+2 = %llu, pi+2 = %llu, pd+2 = %llu\n",
		(unsigned long long)(pc + 2), (unsigned long long)(pi + 2), (unsigned long long)(pd + 2));	// +2, +8, +16

	return 0;
}
