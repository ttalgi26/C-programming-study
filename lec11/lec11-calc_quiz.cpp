/*

 [개념 정리 - strcmp() 로 정답 검사 (단답형 퀴즈)]
 - 정답과 입력이 같을 때까지 do-while 반복
     strcmp(key, buffer) != 0  -> 다르면 계속 반복
 - 대소문자도 구별함 ("c" 는 "C" 와 다름)
 - gets_s 로 한 줄 입력

*/

#include <stdio.h>
#include <string.h>

int main(void) {
	char key[] = "C";	// 정답
	char buffer[80] = "";

	do {
		printf("Embedded language? ");
		gets_s(buffer, sizeof(buffer));
	} while (strcmp(key, buffer) != 0);	// 다르면 다시 입력

	printf("Correct!");

	return 0;
}
