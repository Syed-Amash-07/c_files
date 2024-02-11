#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];
    printf("enter your name:");
    fgets(name,25,stdin);
    name[strlen(name)-1]='\0';

    while(strlen(name)==0){
      printf("you didnt enter any name!!\n");
      printf("\nenter your name:");
      fgets(name,25,stdin);
      name[strlen(name)-1]='\0';
    }

    printf("hello %s",name);

    return 0;
}
