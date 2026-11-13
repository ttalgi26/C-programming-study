/*

 [개념 정리 - 문자 입출력 함수]
     getchar()  하나의 문자를 받아서 반환한다. 버퍼를 사용한다. (엔터를 쳐야 입력됨)
     putchar()  하나의 문자를 받아서 출력한다.
     _getch()   하나의 문자를 받아서 반환한다. 버퍼를 사용하지 않는다. (누르는 즉시, 화면에 안 보임)
     _putch()   하나의 문자를 받아서 출력한다.
 - ch 를 int 로 선언하는 이유 : getchar() 는 int 를 반환 (입력 끝을 뜻하는 EOF(-1) 도 받아야 해서)

*/

#include <stdio.h>

int main(void) {
	int ch;	// 정수형에 주의

	ch = getchar();	// 첫 번째 문자를 입력받는다. (엔터 필요)
	putchar(ch);	// 문자를 출력한다.

	return 0;
}
