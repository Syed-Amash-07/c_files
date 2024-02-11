#include <stdio.h>

int main()
{
    int age;

    printf("enter your age:");
    scanf("%d",&age);


    if(age>=18){
    printf("youre a major\n");
    printf("now you are eligible for voting!!!\n");
    }
    if(age<18){
    printf("youre still a minor!!!\n");
    printf("go and study bro go and do some works!!!\n");

    }
   return 0;
}
