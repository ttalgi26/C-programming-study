/*
 
 scanf(형식 지정자, &변수);
 &연산자 : 변수의 주소를 계산하는 연산자

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    int x;
    int y;
    int sum;
    printf("첫 번째 숫자를입력하시오: ");
    scanf("%d", &x);
    printf("두 번째 숫자를입력하시오: ");
    scanf("%d", &y);
    sum = x + y;
    printf("두 숫자의 합은 = %d\n", sum);

    return 0;
}
