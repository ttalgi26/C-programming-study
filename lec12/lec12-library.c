/*

 [개념 정리 - 도서관 관리 프로그램 (구조체 배열 + typedef + 함수)] (11장 Mini Project)
 - 교재에는 실행 화면만 있어서 직접 작성함
 - typedef struct { ... } BOOK; 으로 책 정보(번호, 제목, 저자)를 하나로 묶음
 - BOOK library[MAX] : 구조체 배열에 책들을 저장, count 는 현재 책 수
 - 메뉴
     1. 도서 번호로 책 찾기   -> number 비교 (==)
     2. 저자 이름으로 책 찾기 -> strcmp(author, ...) == 0
     3. 제목으로 책 찾기       -> strcmp(title, ...) == 0
     4. 새로운 책 추가        -> library[count] 에 입력 후 count++
     5. 소장 도서 수 표시
     6. 종료
 - 책 하나 출력은 print_book(BOOK *b) 로 포인터를 넘기고 b->멤버 로 접근 (-> 연산자 연습)
 - 제목/저자는 공백 없이 입력 (scanf("%s") 는 공백에서 끊김)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct book {
	int number;	// 도서 번호
	char title[50];	// 제목
	char author[30];	// 저자
} BOOK;

void print_book(BOOK* b)
{
	printf("[%d] %s / %s\n", b->number, b->title, b->author);	// -> 로 멤버 접근
}

int main(void)
{
	BOOK library[MAX] = {
		{ 1, "C_Concert", "Chun" },
		{ 2, "Harry_Potter", "Rowling" },
		{ 3, "The_Little_Prince", "Saint-Exupery" }
	};
	int count = 3;	// 현재 소장 도서 수
	int menu, i, num, found;
	char key[50];

	while (1) {
		printf("========================================\n");
		printf("1. Find a book by number\n");
		printf("2. Find a book by author\n");
		printf("3. Find a book by title\n");
		printf("4. Add a new book\n");
		printf("5. Show the number of books\n");
		printf("6. Exit\n");
		printf("========================================\n");
		printf("Select a menu: ");
		scanf("%d", &menu);

		if (menu == 6) break;

		found = 0;
		switch (menu) {
		case 1:
			printf("Book number: ");
			scanf("%d", &num);
			for (i = 0; i < count; i++)
				if (library[i].number == num) { print_book(&library[i]); found = 1; }
			break;
		case 2:
			printf("Author: ");
			scanf("%s", key);
			for (i = 0; i < count; i++)
				if (strcmp(library[i].author, key) == 0) { print_book(&library[i]); found = 1; }
			break;
		case 3:
			printf("Title: ");
			scanf("%s", key);
			for (i = 0; i < count; i++)
				if (strcmp(library[i].title, key) == 0) { print_book(&library[i]); found = 1; }
			break;
		case 4:
			if (count >= MAX) { printf("Library is full.\n"); break; }
			library[count].number = count + 1;	// 번호 자동 부여
			printf("Title: ");
			scanf("%s", library[count].title);
			printf("Author: ");
			scanf("%s", library[count].author);
			print_book(&library[count]);
			count++;
			found = 1;
			break;
		case 5:
			printf("Number of books: %d\n", count);
			found = 1;
			break;
		default:
			printf("Invalid menu.\n");
			found = 1;
			break;
		}
		if (found == 0) printf("Not found.\n");
		printf("\n");
	}

	return 0;
}
