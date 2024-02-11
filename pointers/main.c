
#include <stdio.h>
#include <stdlib.h>

int fun(int ,int);

int main()
{
    int *n,m;
    int *c;
    n=5;
    m=7;
    c=&n;
    printf("%u",*c);


    return 0;
}

