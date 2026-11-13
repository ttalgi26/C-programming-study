/*

 [개념 정리 - 3차원 문자 배열로 사전 만들기]
 - char dic[단어 수][2][30]
     dic[i][0] : i 번째 영어 단어
     dic[i][1] : i 번째 설명
 - 입력한 단어와 strcmp(dic[i][0], word) == 0 인 것을 찾으면 설명 출력
 - 교재는 i 와 index 를 둘 다 쓰지만 같은 값이라 i 하나로 정리

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WORDS 5

int main(void) {
	int i;
	char dic[WORDS][2][30] = {
		{ "book", "one" },
		{ "boy", "two" },
		{ "computer", "three" },
		{ "language", "four" },
		{ "rain", "five" },
	};
	char word[30];

	printf("Enter a word:");
	scanf("%s", word);

	for (i = 0; i < WORDS; i++)
	{
		if (strcmp(dic[i][0], word) == 0)	// 단어가 같으면
		{
			printf("%s: %s\n", word, dic[i][1]);	// 설명 출력
			return 0;
		}
	}
	printf("Not found in dictionary.\n");

	return 0;
}
