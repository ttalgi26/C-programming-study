/*

 [개념 정리 - XOR 텍스트 암호화] (10장 Mini Project)
 - 교재에는 설명만 있어서 직접 작성함
 - 문자열의 모든 문자에 암호키와 비트 XOR(^) 연산 -> 암호화
 - 같은 키로 한 번 더 XOR 하면 원래대로 돌아옴 -> 복호화
     (a ^ k) ^ k = a   (4장 비트 연산자 : 같은 비트끼리 XOR 하면 0)
 - 암호화하면 '\0' 이 아닌 다른 글자가 될 수 있어서, 길이를 미리 구해두고 그만큼 반복
 - 키 0x1F : 알파벳/공백과 XOR 해도 '\0' 이 되지 않는 값

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define KEY 0x1F

int main(void) {
	char s[100];
	int i, len;

	printf("Enter a string: ");
	gets_s(s, sizeof(s));
	len = strlen(s);	// 암호화 전에 길이 저장

	for (i = 0; i < len; i++)
		s[i] = s[i] ^ KEY;	// 암호화
	printf("Encrypted: %s\n", s);

	for (i = 0; i < len; i++)
		s[i] = s[i] ^ KEY;	// 같은 키로 다시 XOR -> 복호화
	printf("Decrypted: %s\n", s);

	return 0;
}
