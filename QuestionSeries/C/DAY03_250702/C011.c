// 문자형 변수 char
// 문자를 저장할 수 있는 정수로, 내부적으로는 1 byte 크기의 정수형 type
#include <stdio.h>

main()
{
    char ch; // range : -128~127
    unsigned char j; // range : 255
    char k;
    char c;
    char d;

    ch = 200;
    j = 200;
    k ='a';
    c = 'A';
    d = '0';

    printf("문자형 변수 ch의 값은 %d\n",ch);
    printf("문자형 변수 j의 값은 %d\n",j);
    printf("문자형 변수 k의 값은 %d\n",k); // ASCII 값이 반환되게 된다. [97]
    printf("문자형 변수 c의 값은 %d\n",c); // [65]
    printf("문자형 변수 d의 값은 %d\n",d); // [48]
}
