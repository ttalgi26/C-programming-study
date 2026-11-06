/*

 [개념 정리 - 메모리와 변수의 주소]
 - 변수는 메모리에 저장되고, 메모리는 바이트 단위로 액세스됨
     첫 번째 바이트의 주소는 0, 두 번째 바이트는 1, ...
 - 변수의 크기만큼 메모리 공간을 차지함 : char 1바이트, int 4바이트, float 4바이트 ...
 - & (주소 연산자) : 변수의 주소를 계산하는 연산자   ex) 변수 i의 주소 -> &i
     scanf("%d", &x); 에서 쓰던 그 & 임
 - 주소 출력 : %p (16진수로 출력)
     교재는 %u 를 쓰지만 64비트 환경에서는 주소가 잘릴 수 있어서 %p 가 정확함
 - 주소 값은 실행할 때마다 달라질 수 있음

*/

#include <stdio.h>

int main(void) {
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("address of i: %p\n", &i);	// 변수 i의 주소 출력
	printf("address of c: %p\n", &c);	// 변수 c의 주소 출력
	printf("address of f: %p\n", &f);	// 변수 f의 주소 출력

	return 0;
}
