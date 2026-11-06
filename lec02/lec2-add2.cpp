/*

 scanf(형식 지정자, &변수);
 &연산자 : 변수의 주소를 계산하는 연산자

 [개념 정리 - scanf()]
 - scanf()는 키보드 입력을 받아 변수에 저장 -> 저장하려면 변수의 "주소"가 필요해서 & 붙임
 - 형식 지정자 : %d 정수 / %f 실수(float) / %lf 실수(double) / %c 문자 / %s 문자열
 - 주의!! double 입력은 반드시 %lf  (printf 출력은 %f, %lf 둘 다 됨)
 - #define _CRT_SECURE_NO_WARNINGS
     비주얼 스튜디오는 scanf() 쓰면 "안전하지 않으니 scanf_s() 써라" 에러를 냄
     -> 소스 맨 첫 줄에 이걸 정의하면 기존 scanf()를 그대로 쓸 수 있음
     (scanf_s()는 C11의 선택적 표준(Annex K)이라 다른 컴파일러에선 잘 안 씀)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);	// 콘솔 한글 깨짐 방지 (Windows 전용)

    int x;
    int y;
    int sum;
    printf("첫 번째 숫자를입력하시오: ");	// 입력 안내 메시지
    scanf("%d", &x);	// 정수 하나를 받아서 x에 저장
    printf("두 번째 숫자를입력하시오: ");
    scanf("%d", &y);
    sum = x + y;
    printf("두 숫자의 합은 = %d\n", sum);

    return 0;
}
