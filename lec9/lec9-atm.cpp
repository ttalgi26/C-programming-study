/*

 [개념 정리 - 기능별로 함수 나누기 (ATM)] (8장 Mini Project)
 - 교재에는 실행 화면만 있고 코드가 없어서 직접 작성함
 - 각 기능을 하나의 함수로 구현
     print_menu()    : 메뉴 출력, 선택 번호 반환
     check_balance() : 잔고 출력 (반환값 없음 -> void)
     deposit()       : 입금 후 새로운 잔고 반환
     withdraw()      : 출금 후 새로운 잔고 반환 (잔고 부족 시 그대로)
 - 잔고를 전역 변수로 두지 않고 인수로 넘기고 반환값으로 받음
     balance = deposit(balance);
     -> 함수는 매개변수의 "복사본"을 받기 때문에, 바뀐 값은 return 으로 돌려줘야 함
 - do-while 로 메뉴 반복, switch 로 메뉴 선택

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int print_menu(void);
void check_balance(int balance);
int deposit(int balance);
int withdraw(int balance);

int main(void) {
	int balance = 10000;	// 처음 잔고
	int menu;

	printf("********** Welcome to Concert ATM **********\n");

	do {
		menu = print_menu();

		switch (menu) {
			case 1:
				check_balance(balance);
				break;
			case 2:
				balance = deposit(balance);	// 바뀐 잔고를 반환받아 저장
				break;
			case 3:
				balance = withdraw(balance);
				break;
			case 4:
				printf("Thank you. Goodbye.\n");
				break;
			default:
				printf("Invalid menu.\n\n");
				break;
		}
	} while (menu != 4);	// 4(종료) 선택할 때까지 반복

	return 0;
}

int print_menu(void)
{
	int menu;

	printf("**** Select one ****\n");
	printf("<1> Check balance\n");
	printf("<2> Deposit\n");
	printf("<3> Withdraw\n");
	printf("<4> Exit\n");
	scanf("%d", &menu);

	return menu;
}

void check_balance(int balance)
{
	printf("Current balance is %d.\n\n", balance);
}

int deposit(int balance)
{
	int amount;

	printf("**** Enter the deposit amount\n");
	scanf("%d", &amount);
	balance += amount;	// 매개변수(복사본)를 바꾼 것
	printf("\nNew balance is %d.\n\n", balance);

	return balance;	// 바뀐 값을 돌려줘야 main 의 balance 도 바뀜
}

int withdraw(int balance)
{
	int amount;

	printf("**** Enter the withdrawal amount\n");
	scanf("%d", &amount);

	if (amount > balance) {	// 잔고 부족
		printf("\nInsufficient balance.\n\n");
		return balance;	// 그대로 반환
	}
	balance -= amount;
	printf("\nNew balance is %d.\n\n", balance);

	return balance;
}
