/*

 [개념 정리 - 구조체 선언과 멤버 참조] (시험 단골)
 - 구조체(structure) : 타입이 서로 다른 데이터들을 하나로 묶는 것
     학번(int), 이름(문자열), 학점(double) -> struct student 하나로
 - 구조체 선언 형식
     struct 태그 {        // 태그(tag) : 구조체 이름
         자료형 멤버1;     // 멤버(member) : 구조체 안의 변수
         자료형 멤버2;
     };                   // <- 세미콜론 필수!!
 - 구조체 "선언" 은 변수 선언이 아님 (틀만 만든 것, 메모리 할당 X)
   -> struct student s; 로 구조체 "변수" 를 선언해야 메모리가 생김
 - 멤버 참조 : 구조체변수.멤버   ( . 은 멤버 연산자)
     s.number = 20170001;
     strcpy(s.name, "Hong");   <- 문자열 멤버는 = 로 대입 불가, strcpy 사용
     s.grade = 4.3;
 - 교재 코드 수정
     1) strcpy 를 쓰는데 <string.h> 가 빠져 있어서 추가 (교재는 <stdlib.h>)
     2) "Hong Gil-dong" 은 13글자 + '\0' 인데 교재는 name[10] -> 배열 넘침
        (VS 에서 "Stack around the variable 's' was corrupted" 에러) -> name[20] 으로

*/

#include <stdio.h>
#include <string.h>	// strcpy

struct student {	// 구조체 선언 (틀)
	int number;	// 멤버 : 학번
	char name[20];	// 멤버 : 이름
	double grade;	// 멤버 : 학점
};	// 세미콜론!

int main(void)
{
	struct student s;	// 구조체 변수 선언 (여기서 메모리 할당)

	s.number = 20170001;	// . 연산자로 멤버 참조
	strcpy(s.name, "Hong Gil-dong");	// 문자열 멤버는 strcpy
	s.grade = 4.3;

	printf("ID: %d\n", s.number);
	printf("Name: %s\n", s.name);
	printf("GPA: %f\n", s.grade);

	return 0;
}
