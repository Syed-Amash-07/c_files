#include <stdio.h>
int main()
{
   int age;
   char name[25];

   printf("you're name please:  ");
   fgets(name,25,stdin);

   printf("you're age please:  ");
   scanf("%d",&age);

   printf("you're name is %s!\n",name);
   printf("you are %d years old!\n",age);
    return 0;
}
