#include <stdio.h>

void birthday(char x[25],int y){
   printf("\nhappy birthday to %s \n",x);
   printf("You are now %d years old \n",y);

}

int main()
{
    char name[25];
    int age;

    printf("enter you name:");
    scanf("%s",&name);
    printf("enter your age:");
    scanf("%d",&age);

    birthday(name,age);

    return 0;
}
