// 주석
#include <stdio.h>

main()
{
    int i; // 정수형 변수 i를 정의한다.
    int hap =0; // 정수형 변수를 정의하고, 0으로 초기화 한다.

    /*
    for 문은 다음 처럼 실행된다.

    1) i에 1을 초기값으로 설정한다.
    2) i가 10보다 작거나 같을 때까지만 순환문은 반복된다.
    3) 현재의 hap의 값과 i값을 더하여 hap에 대입한다.
    4) i는 1씩 증가한다.
    */
    for(i=0;i<=10;i++)
    {
        hap = hap + i;
    }

    printf("Sum of the i~10: %d",hap);
}