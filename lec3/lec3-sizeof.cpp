/*

 [개념 정리 - 자료형의 크기와 sizeof 연산자]
 - sizeof : 변수나 자료형의 크기를 바이트 단위로 계산하는 연산자 (함수 아님!)
 - 비주얼 스튜디오 기준 자료형 크기 (컴파일러마다 다를 수 있음)
     char 1 / short 2 / int 4 / long 4 / long long 8
     float 4 / double 8 / long double 8
 - 다양한 자료형을 쓰는 이유 : 용도에 맞게 메모리를 효율적으로 쓰기 위해
     (커피 전문점 컵 사이즈가 여러 개인 것과 같음)
 - sizeof의 결과는 size_t 형 -> %zu 로 출력 (또는 (int)로 형변환해서 %d)

*/

#include <stdio.h>

int main(void) {
	int x;

	printf("size of variable x = %d \n", (int)sizeof(x));	// 변수의 크기
	printf("char        : %d bytes \n", (int)sizeof(char));
	printf("short       : %d bytes \n", (int)sizeof(short));
	printf("int         : %d bytes \n", (int)sizeof(int));
	printf("long        : %d bytes \n", (int)sizeof(long));
	printf("long long   : %d bytes \n", (int)sizeof(long long));
	printf("float       : %d bytes \n", (int)sizeof(float));
	printf("double      : %d bytes \n", (int)sizeof(double));
	printf("long double : %d bytes \n", (int)sizeof(long double));

	return 0;
}
