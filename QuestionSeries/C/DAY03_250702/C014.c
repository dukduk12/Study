// 논리형 변수 bool
// 1(true) & 0(false)
// 추가로 0을 제외한 모든 양수와 음수값은 참이 된다. ***
#include <stdio.h>

main()
{
    int b;
    int j;

    b = 10 > 5;
    j = 10 > 20;

    printf("논리형 변수 d의 값은 %d\n",b);
    printf("논리형 변수 d1의 값은 %d\n",j);

    if(b)
    {
        printf("The expression 10 > 5 is true.\n");
    }
    else
    {
        printf("The expression 10 > 5 is false.\n");
    }

    if(j)
    {
        printf("The expression 10 > 5 is true.\n");
    }
    else
    {
        printf("The expression 10 > 5 is false.\n");
    }

    if(-1)
    {
        printf("-1 is true.\n");
    }
    else
    {
        printf("-1 is false.\n");
    }
}
