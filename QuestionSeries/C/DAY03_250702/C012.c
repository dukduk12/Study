// 숫자형 변수 int
// char (8 bit), short (16 bit), int (32 bit), long (64 bit)
#include <stdio.h>

main()
{
    int i; // range : -2,147,483,648 ~ 2,147,483,647
    unsigned int j; // range : 0 ~ 4,294,967,295
    int k;

    i = 2000000000;
    j = 4000000000;
    k ='b';

    printf("정수형 변수 i의 값은 %d\n",i);
    printf("정수형 변수 j의 값은 %u\n",j);
    printf("정수형 변수 k의 값은 %d\n",k); // ASCII 값이 반환되게 된다. [98]
}
