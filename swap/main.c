#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter two integers to be swapped:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
    return 0;
}

int main()
{
    int a,b;
    printf("enter two integers to be swapped:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    return 0;
}
