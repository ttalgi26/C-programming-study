/*

 [개념 정리 - _getch() 로 패스워드 입력]
 - _getch() 는 누른 글자를 화면에 보여주지 않음 -> 대신 '*' 를 출력
 - 8글자를 하나씩 password[i] 에 저장한 뒤
   password[i] = '\0'; 으로 문자열 끝 표시 (i 는 반복이 끝나면 8)
 - 배열 크기 10 : 8글자 + '\0' 을 넣을 공간 충분

*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char password[10];
	int i;

	system("cls");
	printf("Enter password: ");
	for (i = 0; i < 8; i++) {
		password[i] = _getch();	// 화면에 안 보이게 입력
		printf("*");	// 대신 * 출력
	}
	password[i] = '\0';	// 문자열 끝 (i == 8)
	printf("\n");

	printf("The entered password is: ");
	printf("%s\n", password);
	_getch();

	return 0;
}
