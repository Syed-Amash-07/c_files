#include <stdio.h>

void hello(char[],int);

int main()
{
       char name[]="bro";
       int age =21;
    hello (name,age);
    return 0;
}
void hello(char name[],int age){

     printf("hello %s",name);
     printf("\nyou are %d years old",age);

}
