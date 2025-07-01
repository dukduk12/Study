// function ** 
// 1~n까지 합을 구하는 함수 만들기
#include <stdio.h>

int hapf(int value); // function도 선언을 미리 해두어야 함 ***

main()
{
    printf("Sum of the 1~10: %d",hapf(10));
    printf("Sum of the 1~100: %d",hapf(100));
    printf("Sum of the 1~1000: %d",hapf(1000));
}

int hapf(int value)
{    
    int i;
    int hap =0;

    for(i=0;i<=value;i++)
    {
        hap = hap + i;
    }

    return hap;
}