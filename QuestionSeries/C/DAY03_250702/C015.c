// 문자열형 변수 char* [***]
// char[] (or) char*을 사용해 만들 수 있음

// char *
// C++에서는 금지한다고 함
// read-only memory에 저장됨
// 이는 이 문자열의 시작 주소를 가리키는 pointer

// 모든 문자열의 끝은 널(0)로 종료됨. '\0' 이런식으로 끝을 알림
#include <stdio.h>

int main()
{
    char str[] = "Korea";            // str은 변수로 mutable (스택에 저장됨)
    const char *j = "I love Korea";  // j는 상수로 immutable (읽기 전용 메모리에 저장됨)
    // 이때, j는 문자열 시작인 I의 주소값을 저장한다.

    // 문자열 값 출력
    printf("Value of str: %s\n", str);
    printf("Value of j: %s\n", j); // %s -> "문자열 시작 주소를 받아서, 널 문자('\0')를 만날 때까지 그 주소를 따라가면서 문자들을 출력" 하도록 동작

    // 포인터 주소 출력
    printf("Address of str (array): %p\n", (void *)str);
    printf("Address of j (pointer to literal): %p\n", (void *)j);

    // 변수 자체의 주소 출력
    printf("Address of &str (array variable): %p\n", (void *)&str);
    printf("Address of &j (pointer variable): %p\n", (void *)&j);

    return 0;
}