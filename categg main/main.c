#include<stdio.h>
#include<stdbool.h>

int main(){

    int x =367;
    int age =18;
    float y=95.6;
    char grade ='A';
    char name[]="Syed Amash";
    double a =98.75883773883;
    bool e= true;
    char d=100;  //-128 to +127 can be represented by %d and %c for number and corresponding ascii code
    unsigned char r=120; //for unsigned char it ranges upto +255 using %d and %c

    printf("Hello %s\n",name);
    printf("you are %d years old\n",age);
    printf("your average is %0.10f\n",y);
    printf("your grade is %c\n",grade);
    printf("your highest mark percentage is %0.12lf\n",a);
    printf("%d\n",e);
    printf("%d\n",d);
    printf("%c\n",d);
    printf("%d\n",r);
    printf("%c\n",r);
    return 0;
}
