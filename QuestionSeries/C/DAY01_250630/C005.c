// 조건문 (if ~ else)
// if문 또는 else문 중 하나만 실행되며, 이를 [[제어문]]이라고 한다.
#include <stdio.h>

main()
{
    int x;
    int y;

    x = 20;
    y = 10;
    printf("x: %d, y: %d \t",x,y);

    if(x>y)
    {
        printf("X value is more bigger than Y.");
    }
    else
    {
        printf("Y value is more bigger than Z.");
    }
}