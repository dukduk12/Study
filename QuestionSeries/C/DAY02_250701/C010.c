// complie
// [source code] -> [complier] -> [목적 code] -> [linker] -> [exe program]
// 1) complier = 소스 코드를 컴파일하여 목적 코드를 생성해 줌.
// 2) linker = 컴파일러에 의해 생성된 목적 코드를 실행에 필요한 정보를 담아서 실행 프로그램으로 생성해 줌.
#include <stdio.h>

main()
{
    // int i;
    int hap =0;

    for(i=0;i<=10;i++)
    {
        hap = hap + i;
    }

    printf("Sum of the i~10: %d",hap);
}