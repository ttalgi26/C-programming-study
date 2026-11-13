/*

 [개념 정리 - 문자열 전처리 (알파벳만 남기기)]
 - 원본 line 을 처음부터 '\0' 까지 검사해서 알파벳이면 line2 에 복사
 - k : line2 에 다음 글자를 넣을 위치
 - 마지막에 line2[k] = '\0'; 로 문자열 끝 표시 (빠뜨리면 쓰레기 출력)
 - gets_s(배열, 크기) : 공백 포함 한 줄 입력 (비주얼 스튜디오)
 - 교재 코드 수정한 부분
     1) 교재는 안쪽에 while (line[i] >= 'A' && line[i] <= 'z') line2[k++] = line[i++];
        -> 알파벳이 문자열 끝에 오면 i 가 '\0' 을 건너뛰어 배열 밖을 읽음 -> if 문으로 변경
     2) 'A' ~ 'z' 사이에는 [ \ ] ^ _ ` 같은 기호도 포함됨
        -> 대문자 'A'~'Z', 소문자 'a'~'z' 로 나눠서 검사

*/

#include <stdio.h>

int main(void) {
	char line[100] = "";
	char line2[100] = "";

	printf("Enter a string: ");
	gets_s(line, sizeof(line));	// 한 줄의 문자열 입력

	int k = 0;
	for (int i = 0; line[i] != '\0'; ++i) {
		if ((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z'))
			line2[k++] = line[i];	// 알파벳만 복사
	}
	line2[k] = '\0';	// 문자열 끝 표시

	printf("Output string: %s\n", line2);

	return 0;
}
