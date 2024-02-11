#include <stdio.h>
#include <math.h>

int main()
{
    double A;
    double B;
    double C;

    printf("enter A:");
    scanf("%lf",&A);

    printf("enter B:");
    scanf("%lf",&B);

    C = sqrt(A*A + B*B);

    printf("The hypotenuse is %.1lf\n",C);
    return 0;

}
