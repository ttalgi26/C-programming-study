# Lec11 : 문자열 (교재 10장) 개념 정리

슬라이드의 개념과 조각 코드 정리. 실행 가능한 예제는 같은 폴더의 `lec11-*.cpp` 참고.

> 🔥 **기말 출제 : 행맨 게임** → [맨 아래 행맨 섹션](#-기말-출제-행맨-게임-) 꼭 볼 것

---

## 1. 문자열과 NULL 문자 ⭐

- **문자열(string)** : `"Hello"` 처럼 문자들의 모임 → C에서는 **char 배열**에 저장
- 문자는 아스키 코드(0~127)로 저장됨. C언어는 아스키 코드만 사용
- 문자열의 끝은 반드시 **NULL 문자 `'\0'`** (아스키 코드 0)
  - 컴퓨터는 어디까지가 의미 있는 문자열인지 모름 → 끝 표시가 필요
- **배열 크기 = 글자 수 + 1** (`'\0'` 자리)

```c
char str[6] = "Hello";   // H e l l o \0  (6칸)
```

### 초기화 방법 3가지

```c
char str[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };  // 배열 초기화 방식 ('\0' 직접)
char str[6] = "Hello";                             // 문자열로 초기화 ('\0' 자동)
char str[]  = "Hello";                             // 크기 생략 -> 6
```

| 구분 | `'A'` | `"A"` |
|---|---|---|
| 의미 | 문자 하나 | 문자열 |
| 크기 | 1바이트 | 2바이트 (`'A'` + `'\0'`) |

---

## 2. 문자 입출력 함수

| 함수 | 설명 |
|---|---|
| `getchar()` | 하나의 문자를 받아서 반환한다. **버퍼를 사용한다** (엔터를 쳐야 입력됨) |
| `putchar()` | 하나의 문자를 받아서 출력한다 |
| `_getch()` | 하나의 문자를 받아서 반환한다. **버퍼를 사용하지 않는다** (누르는 즉시, 화면에 안 보임) |
| `_putch()` | 하나의 문자를 받아서 출력한다 |

- `_getch()`, `_putch()` 는 `<conio.h>` (Windows 전용)
- `_getch()` 활용 : 패스워드 입력(`*` 출력), 게임 키 입력, **행맨**
- 화살표 키 : `_getch()` 가 먼저 **224** 를 반환 → 한 번 더 읽어서 방향 구분
  - `75` ← / `77` → / `72` ↑ / `80` ↓

---

## 3. 문자열 입출력 함수 ⭐

| 함수 | 설명 |
|---|---|
| `scanf("%s", s)` | 문자열을 읽어서 배열 `s[]`에 저장 (**공백에서 끊김**) |
| `printf("%s", s)` | 배열 `s[]`의 문자열을 출력 |
| `gets_s(char s[], int len)` | **한 줄**의 문자열을 읽어서 `s[]`에 저장 (공백 포함) |
| `puts(char s[])` | `s[]`의 문자열을 출력하고 줄바꿈 |

- `scanf("%s", name);` ← 배열 이름 앞에 **`&` 안 붙임** (배열 이름 = 주소)
- `"Hong gildong"` 을 `scanf("%s")` 로 받으면 `"Hong"` 만 저장됨

---

## 4. 문자열 처리 라이브러리 `<string.h>` ⭐

| 함수 | 설명 | 예 |
|---|---|---|
| `strlen(s)` | 길이 (`'\0'` 제외) | `strlen("abcdefgh")` → 8 |
| `strcpy(dst, src)` | `src` 를 `dst` 로 **복사** | `strcpy(dst, "Hello")` |
| `strcat(dst, src)` | `dst` 뒤에 `src` 를 **연결** | `"Hello"` + `"World"` → `"HelloWorld"` |
| `strcmp(s1, s2)` | 두 문자열 **비교** | 같으면 **0** |

### strcmp() 반환값

| 반환값 | s1과 s2의 관계 |
|---|---|
| `< 0` | s1이 s2보다 (사전 순서로) **앞**에 있다 |
| `0` | s1과 s2가 **같다** |
| `> 0` | s1이 s2보다 **뒤**에 있다 |

### ⚠️ 자주 틀리는 것 (참고사항)

```c
char *s;
if (s == "language")              // X : 배열(주소)을 비교함
if (strcmp(s, "language") == 0)   // O : 문자열 비교는 반드시 strcmp

char s[100];
s = "A friend in power is a friend lost.";          // X : 배열에 = 로 대입 불가
strcpy(s, "A friend in power is a friend lost.");   // O : 반드시 strcpy
```
- 배열에 문자열을 `=` 로 넣는 건 **선언할 때 초기화**만 가능
- `strlen(s)` 는 글자 수, `sizeof(s)` 는 배열 크기 (`char s[] = "abcdefgh";` → 8 vs 9)

---

## 5. 문자열 ↔ 수치 변환

| 함수 | 하는 일 |
|---|---|
| `atoi("100")` | 문자열 → 정수 100 (`<stdlib.h>`) |
| `sscanf(s, "%d", &i)` | 문자열 s 에서 정수를 읽어 i 에 저장 |
| `sprintf(t, "%d", 100)` | 정수 100 을 문자열 `"100"` 으로 t 에 저장 |

---

## 6. 문자 배열 vs 문자 포인터 ⭐

```c
char s[] = "HelloWorld";   // ① 배열에 문자열을 복사해서 저장
char *p  = "HelloWorld";   // ② 문자열 상수의 주소만 저장
```

| | 글자 변경 `[0] = 'h'` | 다른 문자열 대입 `= "Goodbye"` |
|---|---|---|
| ① 문자 배열 `s` | **가능** | 불가능 (strcpy 사용) |
| ② 문자 포인터 `p` | **불가능** (프로그램 중지) | **가능** (가리키는 주소만 바뀜) |

- 문자열 상수는 **텍스트 세그먼트**(읽기만 가능한 메모리)에 저장됨
- `.cpp` 파일에서는 `const char *p = "...";` 로 써야 컴파일됨 (교재 `.c` 에서는 `char *p` 가능)

---

## 7. 문자열의 배열

```c
char s[3][6] = { "init", "open", "close" };   // [문자열 개수][최대 길이 + 1]
```
- `s[i]` → i 번째 문자열, `s[i][j]` → i 번째 문자열의 j 번째 글자
- 3차원 : `char dic[5][2][30]` → `dic[i][0]` 단어, `dic[i][1]` 설명
- 문자열 정렬 : 버블 정렬에서 비교는 `strcmp() > 0`, 교환은 `strcpy()` 3번

---

## 8. Mini Project

- **XOR 암호화** : 모든 문자에 `s[i] ^ KEY` → 같은 키로 한 번 더 XOR 하면 복호화 `(a ^ k) ^ k = a`
- **런 길이 엔코딩(RLE)** : 반복되는 문자를 "개수 + 문자"로 압축 (무손실)
  - `"wwwssssssssschh"` → `"3w9s1c2h"`

---

## 🔥🔥 [기말 출제] 행맨 게임 🔥🔥

> **기말에 나온다고 한 부분!** 코드 전체 흐름을 외우고, 빈칸 채우기 / 실행 결과 문제에 대비할 것.
> 코드 : `lec11-hangman.cpp` (교재), `lec11-hangman2.cpp` (도전문제)

### 게임 규칙
- 빈칸으로 된 문자열이 주어지고, 사용자가 글자를 하나씩 추측
- 맞힌 글자는 **그 글자가 있는 모든 자리**에 공개, 전부 맞히면 종료

### 교재 코드 (hangman.c)

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>      // _getch()
#include <string.h>     // strcmp()

int main(void) {
    char solution[100] = "meet at midnight";   // 정답
    char answer[100]   = "____ __ ________";   // 현재까지 맞춘 문자열
    char ch;
    int i;

    while (1) {
        printf("\nCurrent string: %s \n", answer);
        printf("Guess a letter: ");
        ch = _getch();                                  // ① 글자 하나 입력

        for (i = 0; solution[i] != '\0'; i++) {         // ② 문자열 끝까지 검사
            if (solution[i] == ch)                      //    정답의 i번째 글자와 같으면
                answer[i] = ch;                         //    같은 자리에 공개
        }
        if (strcmp(solution, answer) == 0) break;       // ③ 다 맞혔으면 종료
    }
    return 0;
}
```

### ✅ 핵심 포인트 (외우기)

| 포인트 | 내용 |
|---|---|
| 배열 2개 | `solution` = 정답, `answer` = 현재 상태 |
| 길이·공백 위치 | `solution` 과 `answer` 는 **길이가 같고 공백 위치도 같아야** 함 (공백은 처음부터 공개) |
| 입력 | `_getch()` → 엔터 없이 바로 한 글자 (`<conio.h>`) |
| 반복 조건 | `solution[i] != '\0'` → 문자열 끝(NULL 문자)까지 |
| 글자 공개 | `if (solution[i] == ch) answer[i] = ch;` → **break 없음** → 같은 글자 여러 개 전부 공개 |
| 종료 조건 | `strcmp(solution, answer) == 0` → 문자열은 `==` 로 비교 불가 |
| 반복 구조 | `while (1)` 무한 루프 + `break` |
| 헤더 | `<conio.h>` (`_getch`), `<string.h>` (`strcmp`) |

### ✅ 실행 과정 추적 (입력 : e → a → t → z → m → i → d → n → g → h)

| 입력 | answer | 설명 |
|---|---|---|
| (시작) | `____ __ ________` | |
| `e` | `_ee_ __ ________` | e 가 2개 → **둘 다** 공개 |
| `a` | `_ee_ a_ ________` | |
| `t` | `_eet at _______t` | t 가 3군데 → 전부 공개 |
| `z` | `_eet at _______t` | 정답에 없음 → 변화 없음 |
| `m` | `meet at m______t` | |
| `i` | `meet at mi__i__t` | |
| `d` | `meet at mid_i__t` | |
| `n` | `meet at midni__t` | |
| `g` | `meet at midnig_t` | |
| `h` | `meet at midnight` | `strcmp == 0` → **break** |

(이 표는 코드를 직접 실행해서 확인한 결과)

### ✍️ 예상 문제

**Q1. 빈칸을 채우시오.**
```c
for (i = 0; solution[i] != ①______; i++) {
    if (solution[i] == ch)
        ②______ = ch;
}
if (③______(solution, answer) == 0) break;
```
<details>
<summary>정답 보기</summary>

① `'\0'` (또는 `0`) ② `answer[i]` ③ `strcmp`

</details>

**Q2. `if (strcmp(solution, answer) == 0)` 대신 `if (solution == answer)` 라고 쓰면?**
<details>
<summary>정답 보기</summary>

배열 이름은 **주소**이므로 두 배열의 주소를 비교하게 됨 → 서로 다른 배열이라 항상 거짓 → 다 맞혀도 **끝나지 않음**.
문자열 비교는 반드시 `strcmp()` 를 써야 한다.

</details>

**Q3. 안쪽 `for` 문의 `if` 안에 `break;` 를 넣으면 어떻게 되나?**
<details>
<summary>정답 보기</summary>

첫 번째로 일치한 자리만 공개되고 나머지는 공개되지 않음.
예) `e` 입력 시 `_e__ __ ________` (두 번째 e 는 안 보임) → 같은 글자를 여러 번 입력해야 함.

</details>

**Q4. `answer` 를 `"________________"` (공백 없이 16칸) 으로 초기화하면?**
<details>
<summary>정답 보기</summary>

공백(`' '`)은 사용자가 입력해도 `_getch()` 로 공백을 쳐야만 공개됨. 공백을 입력하지 않으면 `answer` 의 공백 자리가 `'_'` 로 남아서 `strcmp` 가 0 이 안 됨 → 공백 키를 눌러야 끝남.
그래서 `answer` 는 **정답과 공백 위치를 맞춰서** 초기화한다.

</details>

**Q5. `_getch()` 대신 `getchar()` 를 쓰면 차이는?**
<details>
<summary>정답 보기</summary>

`getchar()` 는 **버퍼를 사용** → 엔터를 쳐야 입력되고, 엔터(`'\n'`)도 한 글자로 읽혀서 반복이 한 번 더 돈다.
`_getch()` 는 버퍼를 사용하지 않아 누르는 즉시 한 글자만 읽는다.

</details>

### 도전문제 (`lec11-hangman2.cpp`)

1. **여러 문자열 중 하나를 정답으로 선택**
   ```c
   char words[5][100] = { "meet at midnight", "apple", ... };   // 문자열의 배열
   strcpy(solution, words[rand() % 5]);                          // = 로 대입 불가 -> strcpy
   ```
2. **빈칸 문자열 자동 생성**
   ```c
   for (i = 0; solution[i] != '\0'; i++) {
       if (solution[i] == ' ') answer[i] = ' ';   // 공백은 그대로
       else                    answer[i] = '_';   // 글자는 빈칸
   }
   answer[i] = '\0';                              // 반드시 NULL 문자로 끝내기!
   ```

---

## 예제 파일 목록

| 파일 | 내용 |
|---|---|
| `lec11-string1.cpp` | 문자열 초기화 3가지, NULL 문자 |
| `lec11-string2.cpp` | 문자열의 글자 하나 변경 |
| `lec11-string3.cpp` | `'\0'` 까지 세서 길이 구하기 |
| `lec11-pre_string.cpp` | Lab : 알파벳만 남기기 |
| `lec11-input1.cpp` | `getchar()` / `putchar()` |
| `lec11-input2.cpp` | `_getch()` / `_putch()` (Windows) |
| `lec11-password.cpp` | Lab : `*` 로 패스워드 입력 (Windows) |
| `lec11-text_game1.cpp` | Lab : 화살표 키 미로 게임 (Windows) |
| `lec11-stringio.cpp` | `scanf("%s")` (공백에서 끊김) |
| `lec11-stringio2.cpp` | `gets_s()` (한 줄 입력) |
| `lec11-strlen.cpp` | `strlen()` vs `sizeof` |
| `lec11-strcpy.cpp` | `strcpy()` |
| `lec11-strcat.cpp` | `strcat()` |
| `lec11-strcmp.cpp` | `strcmp()` |
| `lec11-atoi.cpp` | `atoi()`, `sscanf()`, `sprintf()` |
| `lec11-calc_quiz.cpp` | Lab : 단답형 퀴즈 채점 |
| `lec11-pointer.cpp` | 문자 배열 vs 문자 포인터 |
| `lec11-hangman.cpp` | 🔥 **Lab : 행맨 (기말 출제)** (Windows) |
| `lec11-hangman2.cpp` | 🔥 행맨 도전문제 버전 (Windows) |
| `lec11-anagram.cpp` | Lab : 단어 애나그램 |
| `lec11-array_of_string.cpp` | 문자열의 배열 |
| `lec11-dic.cpp` | Lab : 3차원 배열 사전 |
| `lec11-str_sort.cpp` | Lab : 문자열 정렬 |
| `lec11-xor_encrypt.cpp` | Mini Project : XOR 암호화 |
| `lec11-rle.cpp` | Mini Project : 런 길이 압축 |
