#include <stdio.h>

int main()
{
    int x =5;
    int y =3;
    int z = x+y;
    float k =(float)x/y;
    x+=3;
    y-=2;
    int e=x-y;
    printf("%d\n",z);
    printf("%.2f\n",k);
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",e);
    return 0;
}
