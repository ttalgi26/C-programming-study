# Lec12 : 구조체, 공용체, 열거형 (교재 11장) 개념 정리

슬라이드의 개념과 조각 코드 정리. 실행 가능한 예제는 같은 폴더의 `lec12-*.c` 참고.
이 폴더의 파일은 교재처럼 **`.c` (C 언어)** 로 작성함.

---

## 1. 구조체란? ⭐

- **구조체(structure)** : 타입이 서로 다른 데이터들을 **하나로 묶는** 것
- 학생 데이터 : 학번(`int`), 이름(`char[]`), 학점(`double`) → 따로 두면 다루기 불편 → 구조체로 묶음

```c
struct student {        // student : 태그(tag) = 구조체 이름
    int number;         // 멤버(member)
    char name[10];      // 멤버
    double grade;       // 멤버
};                      // <- 세미콜론 필수!!
```

| 용어 | 의미 |
|---|---|
| 태그(tag) | 구조체의 이름 (`student`) |
| 멤버(member) | 구조체 안의 변수 (`number`, `name`, `grade`) |

- 배열 : **같은** 타입 여러 개 / 구조체 : **다른** 타입 여러 개

---

## 2. 구조체 선언 vs 구조체 변수 선언 ⭐

```c
struct student {        // ① 구조체 선언 (정의) : 틀만 만든 것, 메모리 할당 X
    int number;
    char name[10];
    double grade;
};

int main(void) {
    struct student s1;  // ② 구조체 변수 선언 : 여기서 메모리 할당
}
```
- **구조체 선언은 변수 선언이 아니다** (붕어빵 틀 vs 붕어빵)
- 변수 선언 시 `struct` 키워드를 붙여야 함 : `struct student s1;` (typedef 쓰면 생략 가능)
- 메모리 : `s1` 안에 `number` | `name[10]` | `grade` 가 차례로 배치됨

---

## 3. 초기화와 멤버 참조 ⭐

### 초기화 : 중괄호 안에 멤버 순서대로
```c
struct student s1 = { 24, "Kim", 4.3 };

struct point p = { 1, 2 };             // 순서대로
struct point q = { .y = 2, .x = 1 };   // 멤버 이름 지정 (순서 상관 없음)
struct point r = p;                    // 다른 구조체로 초기화
r = (struct point){ 1, 2 };            // C99 : 나중에 한꺼번에 대입
```

### 멤버 참조 : `.` (멤버 연산자)
```c
s1.number = 20170001;       // 정수 멤버
strcpy(s1.name, "Kim");     // 문자열 멤버 -> = 로 대입 불가, strcpy
s1.grade = 4.3;             // 실수 멤버

scanf("%d", &p1.x);         // 멤버 입력은 &구조체.멤버
```

---

## 4. 구조체 대입과 비교 ⭐

| 연산 | 가능? | 예 |
|---|---|---|
| 대입 `p2 = p1;` | **가능** (권장) | 모든 멤버가 한꺼번에 복사 |
| 비교 `p1 == p2` | **불가능** (컴파일 오류) | 멤버끼리 비교 `p1.x == p2.x && p1.y == p2.y` |

- 배열은 `=` 로 대입이 안 되지만 **구조체는 된다** (헷갈리기 쉬움)

---

## 5. 구조체 배열 ⭐

```c
struct student list[100];             // 구조체 배열 선언

list[2].number = 27;                  // 배열[인덱스].멤버
strcpy(list[2].name, "Hong Gil-dong");
list[2].grade = 178.0;

struct student list[3] = {            // 초기화 : 구조체마다 중괄호
    { 1, "Park", 172.8 },
    { 2, "Kim", 179.2 },
    { 3, "Lee", 180.3 }
};
```

| scanf 입력 | & 필요? |
|---|---|
| `scanf("%d", &list[i].number);` | O (정수) |
| `scanf("%s", list[i].name);` | **X** (문자열 = 배열 = 주소) |
| `scanf("%lf", &list[i].grade);` | O (double 은 `%lf`) |

---

## 6. 구조체와 함수

- 구조체를 **인수**나 **반환값**으로 쓰면 **값에 의한 호출** → 구조체 전체가 복사됨
  - 함수 안에서 매개변수를 바꿔도 원본은 그대로

```c
int equal(struct student s1, struct student s2)   // 구조체를 인수로
{
    if (strcmp(s1.name, s2.name) == 0) return 1;
    else return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)   // 구조체를 반환
{
    struct vector result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;     // return 은 값 하나지만, 구조체로 묶으면 여러 값을 한 번에
}
```

---

## 7. 구조체와 포인터, `->` 연산자 ⭐

```c
struct student s = { 20070001, "Hong", 4.3 };
struct student *p;
p = &s;
```

| 표현 | 의미 |
|---|---|
| `s.number` | 구조체 변수로 멤버 참조 |
| `(*p).number` | 포인터가 가리키는 구조체의 멤버 (**괄호 필수**) |
| `p->number` | 위와 같음 (**간접 멤버 연산자** `->`) |

- `*p.number` 는 `*(p.number)` 로 해석됨 (`.` 이 `*` 보다 우선순위 높음) → 오류
- 그래서 `(*p).number` 또는 `p->number` 를 씀 (`->` 를 더 많이 씀)

---

## 8. 공용체 (union) ⭐

- **같은 메모리 영역**을 여러 멤버가 **공유**

```c
union example {
    int i;      // 같은 기억 공간 공유
    char c;     // 같은 기억 공간 공유
};
```

| | 구조체 struct | 공용체 union |
|---|---|---|
| 메모리 | 멤버마다 **따로** | 모든 멤버가 **같은 곳** |
| 크기 | 멤버 크기의 합 (이상) | **가장 큰 멤버**의 크기 |
| 값 저장 | 모든 멤버 동시에 | 한 멤버에 쓰면 **다른 멤버 값도 바뀜** |

---

## 9. 열거형 (enum) ⭐

- 형식 : `enum 태그 { 값1, 값2, ... };` → 정의된 값만 가질 수 있는 자료형

```c
enum days { MON, TUE, WED, THU, FRI, SAT, SUN };    // 0, 1, 2, 3, 4, 5, 6

enum levels { low = 1, medium, high };              // 1, 2, 3
enum levels { low = 10, medium = 20, high = 30 };   // 10, 20, 30

enum levels english;
english = high;
```
- 값을 지정하지 않으면 **0부터 1씩 증가**
- 중간에 값을 지정하면 **그 다음부터 +1** (`low = 1` → `medium` 2, `high` 3)
- 열거형 값은 정수 → `for` 반복, 배열 인덱스로 사용 가능

---

## 10. typedef ⭐

- **새로운 자료형(type)을 정의(define)** 하는 것 = 기존 자료형에 새 이름 붙이기
- 형식 : `typedef 기존자료형 새자료형;`

```c
typedef unsigned char BYTE;
typedef int INT32;
typedef unsigned int UINT32;

INT32 i;     // int i; 와 같다
UINT32 k;    // unsigned int k; 와 같다

typedef struct point {
    int x;
    int y;
} POINT;     // struct point 를 POINT 로

POINT p;     // struct point p; 와 같다 (struct 생략 가능)
```

| | `typedef` | `#define` |
|---|---|---|
| 처리 | 컴파일러 (자료형 이름) | 전처리기 (단순 문자 치환) |
| 끝 | 세미콜론 `;` 있음 | 세미콜론 없음 |

---

## 예제 파일 목록

| 파일 | 내용 |
|---|---|
| `lec12-student1.c` | 구조체 선언, 멤버 참조 |
| `lec12-struct_init.c` | 구조체 초기화 4가지 |
| `lec12-point.c` | Lab : 두 점 사이 거리 |
| `lec12-struct_assign.c` | 구조체 대입(O) / 비교(X) |
| `lec12-array_of_struct.c` | 구조체 배열 입력·출력 |
| `lec12-multiple_choice.c` | Lab : 4지 선다 퀴즈 |
| `lec12-struct_func.c` | 구조체를 인수·반환값으로 (equal, make_student) |
| `lec12-vector.c` | 구조체를 반환하는 함수 (벡터 합) |
| `lec12-point_to_st.c` | 구조체 포인터, `->` 연산자 |
| `lec12-union.c` | 공용체 |
| `lec12-enum1.c` | 열거형 |
| `lec12-typedef.c` | typedef |
| `lec12-library.c` | Mini Project : 도서관 관리 프로그램 |
