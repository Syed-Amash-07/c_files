#include <stdio.h>
#include <string.h>
int main()
{
   int age;
   char name[50];

   printf("you're name please:  ");
   fgets(name,50,stdin);
   name[strlen(name)-1]="\0";


   printf("you're age please:  ");
   scanf("%d",&age);

   printf("you're name is %s!, how are you !!\n",name);
   printf("you are %d years old!\n",age);
    return 0;
}
