/*

 [개념 정리 - 제어 문자 & 이스케이프 시퀀스]
 - 제어 문자 : 인쇄용이 아니라 "제어" 목적의 문자 (줄바꿈, 탭, 벨소리, 백스페이스 ...)
 - 표현 방법 2가지 : 1) 아스키 코드 직접 사용  char beep = 7;
                    2) 이스케이프 시퀀스 사용   char beep = '\a';
 - 주요 이스케이프 시퀀스
     \n 줄바꿈   \t 탭   \b 백스페이스(커서 한 칸 뒤로)   \a 경고음(벨)
     \r 캐리지 리턴(줄 맨 앞으로)   \" 큰따옴표   \' 작은따옴표   \\ 역슬래시
 - 문자열 안에서 " 를 출력하려면 \" 로 써야 함

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int id, pass;

	printf("Enter 4-digit ID and password:\n");
	printf("id:____\b\b\b\b");	// \b 4번 -> 커서가 밑줄 시작 위치로 돌아감
	scanf("%d", &id);

	printf("pass:____\b\b\b\b");
	scanf("%d", &pass);

	printf("\a ID is \"%d\",password is \"%d\".\n", id, pass);	// \a 벨소리, \" 큰따옴표 출력

	return 0;
}
