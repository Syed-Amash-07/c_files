#include <stdio.h>

int main()
{
    const float PI=3.156;
    float item1=5.75;
    printf("item1: %-40.2f\n",item1);
    printf("%.3f\n",PI);         //format specifier "".number"" between % and f for decimal numberss
    return 0;                                   //minimum field width == number between % and ./f
}                                               //left align ==== -after % before everything
