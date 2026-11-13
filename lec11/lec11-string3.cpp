/*

 [개념 정리 - 문자열 길이 직접 세기]
 - '\0' 을 만날 때까지 i 를 증가 -> i 가 문자열의 길이
 - str[i] != 0  ==  str[i] != '\0'  (NULL 문자의 아스키 코드가 0)
 - 공백도 한 글자로 셈, '\0' 은 길이에 포함 안 됨
 - 라이브러리 함수 strlen() 과 같은 동작 (lec11-strlen)

*/

#include <stdio.h>

int main(void) {
	char str[] = "A barking dog never bites";
	int i = 0;

	while (str[i] != 0)	// '\0' 이 나올 때까지
		i++;

	printf("Length of string %s is %d.\n", str, i);	// 25

	return 0;
}
