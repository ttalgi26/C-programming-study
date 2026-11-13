/*

 [개념 정리 - 런 길이 엔코딩(RLE) 텍스트 압축] (10장 Mini Project)
 - 교재에는 설명만 있어서 직접 작성함
 - 무손실 압축 : 같은 문자가 연속으로 반복되면 "개수 + 문자" 로 바꿈
     "wwwssssssssschh" -> "3w9s1c2h"
 - 현재 글자와 다음 글자가 같으면 count++, 다르면 (count, 글자)를 결과에 붙이고 count = 1
 - sprintf(out + k, "%d%c", count, c) : 결과 문자열의 k 위치부터 써 넣음, 쓴 글자 수를 반환
     (out + k 는 &out[k] 와 같음 - 9장 포인터 연산)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char s[100];
	char out[300] = "";
	int i, k = 0, count = 1;

	printf("Enter a string: ");
	scanf("%s", s);	// 알파벳 영문자로 한정 (공백 없음)

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == s[i + 1])	// 다음 글자와 같으면
			count++;
		else {	// 달라지면 (마지막 글자는 s[i+1] 이 '\0' 이라 여기로)
			k += sprintf(out + k, "%d%c", count, s[i]);
			count = 1;
		}
	}

	printf("Compressed: %s\n", out);

	return 0;
}
