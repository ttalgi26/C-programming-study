/*

 [개념 정리 - 열거형(enum)] (시험 단골)
 - 형식 : enum 태그 { 값1, 값2, ... };
     정의된 값들만 가질 수 있는 자료형
 - 값을 지정하지 않으면 0 부터 1씩 증가
     enum days { MON, TUE, WED, THU, FRI, SAT, SUN };  -> MON=0, TUE=1, ..., SUN=6
 - 값 지정
     enum levels { low = 1, medium, high };              -> 1, 2, 3 (지정한 값 다음부터 +1)
     enum levels { low = 10, medium = 20, high = 30 };   -> 10, 20, 30
 - 사용 : enum levels english;  english = high;
 - 열거형 값은 정수라서 for 반복, 배열 인덱스로 사용 가능 (days_name[d])
 - char *days_name[] : 포인터들의 배열 (각 요소가 문자열 상수를 가리킴)

*/

#include <stdio.h>

enum days { MON, TUE, WED, THU, FRI, SAT, SUN };	// 0 ~ 6

// 포인터들의 배열을 만들고 문자열 상수로 초기화한다.
char* days_name[] = {
	"monday", "tuesday", "wednesday", "thursday", "friday",
	"saturday", "sunday" };

int main(void)
{
	enum days d;

	for (d = MON; d <= SUN; d++)	// 0 ~ 6
		printf("The name of day %d is %s.\n", d, days_name[d]);

	return 0;
}
