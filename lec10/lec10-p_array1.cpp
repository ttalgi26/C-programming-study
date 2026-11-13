/*

 [개념 정리 - 배열 이름은 포인터] (시험 단골)
 - 배열 이름 = 배열의 첫 번째 요소의 주소
     a == &a[0]
 - 배열 요소는 메모리에 연속으로 저장됨 -> int 배열이면 주소가 4씩 증가

*/

#include <stdio.h>

int main(void) {
	int a[] = { 10, 20, 30, 40, 50 };

	printf("name of array = %u\n", a);	// 배열 이름
	printf("address of first element = %u\n", &a[0]);	// 첫 요소의 주소 -> 같음
	printf("address of second element = %u\n", &a[1]);	// 4 증가

	return 0;
}
