#include <stdio.h>
int main()
{
    const double PI=3.14159;
    double radius;
    double circumference;
    double area;


    printf("enter the radius:");
    scanf("%lf",&radius);

    area=PI*radius*radius;
    circumference=2*PI*radius;

    printf("\nCircumference: %lf\n",circumference);
    printf("Area: %lf\n",area);
    return 0;


}
