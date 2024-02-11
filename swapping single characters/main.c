#include <stdio.h>
#include <stdlib.h>

int main()
{   char x='Y';
    char y='X';
    char temp;

    temp=x;
    x=y;
    y=temp;

    printf("%c\n",x);
    printf("%c",y);
    return 0;
}
