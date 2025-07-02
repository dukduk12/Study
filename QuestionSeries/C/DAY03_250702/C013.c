// 실수형 변수 double & float
// 실수형 변수를 다룰때에는 double을 더 많이 사용함
// 정밀도란? 소수점 이하 몇자리까지 표시하는가를 의미함
// float(7자리) & double(14자리)
#include <stdio.h>

main()
{
    float d; // range : 1.2E -38 ~ 3.4E38
    double d1; // range : 2.2E-308 ~ 1.8E308
    double d2;

    d = 3.141592;
    d1 = 1234567890;
    d2 = 'c';

    printf("실수형 변수 d의 값은 %E\n",d);
    printf("실수형 변수 d1의 값은 %E\n",d1);
    printf("실수형 변수 d2의 값은 %E\n",d2);
}
