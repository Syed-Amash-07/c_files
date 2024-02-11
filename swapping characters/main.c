#include <stdio.h>
#include <string.h>

int main()
{
    char x[25]="water";
    char y[25]="lemonade";
    char temp[25];

    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);

    printf("\nx is %s",x);
    printf("\ny is %s",y);
    return 0;
}
