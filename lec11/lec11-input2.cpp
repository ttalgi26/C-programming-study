/*

 [개념 정리 - _getch(), _putch()]
 - <conio.h> 필요 (Windows 전용)
 - _getch() : 버퍼를 사용하지 않음 -> 엔터 없이 키를 누르는 즉시 입력, 누른 글자가 화면에 표시되지 않음
     게임(키 입력), 패스워드 입력, 행맨에서 사용
 - getchar() 는 버퍼 사용 -> 엔터를 쳐야 입력이 전달됨

*/

#include <stdio.h>
#include <conio.h>

int main(void) {
	int ch;	// 정수형에 주의

	ch = _getch();	// 첫 번째 문자를 입력받는다. (엔터 없이 바로)
	_putch(ch);	// 문자를 출력한다.

	return 0;
}
