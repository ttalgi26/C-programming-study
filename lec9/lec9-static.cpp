/*

 [개념 정리 - 정적 지역 변수 static] (시험 단골)
 - 정적 변수 : 블록 안에서만 사용되지만, 블록을 벗어나도 자동으로 삭제되지 않는 변수
     선언 앞에 static 을 붙임   ex) static int count;
 - 초기화는 프로그램 시작 시 딱 한 번만 됨 -> 함수가 끝나도 값이 유지됨
 - 초기화하지 않으면 0 (전역 변수처럼)
 - 일반 지역 변수(auto) 는 호출할 때마다 새로 만들어지고 다시 0으로 초기화
 - 실행 결과
     auto_count=1 static_count=1
     auto_count=1 static_count=2
     auto_count=1 static_count=3
 - 사용 범위는 지역 변수 (그 함수 안), 생존 기간은 전역 변수 (프로그램 끝까지)

*/

#include <stdio.h>

void sub(void)
{
	int auto_count = 0;	// 호출될 때마다 0으로 새로 초기화
	static int static_count = 0;	// 처음 한 번만 초기화, 값 유지

	auto_count++;
	static_count++;
	printf("auto_count=%d\n", auto_count);
	printf("static_count=%d\n", static_count);
}

int main(void) {
	sub();
	sub();
	sub();

	return 0;
}
