// 순환문
#include <stdio.h>

main()
{
    int i;
    int hap =0;

    for(i=0;i<=10;i++)
    {
        hap = hap + i;
    }

    printf("Sum of the i~10: %d",hap);
}