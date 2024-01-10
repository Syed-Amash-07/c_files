#include <stdio.h>
#include <string.h>

//typedef char user[25];
typedef struct
{
   char name[25];
   int password;
   int id;
}user;

int main()
{
   user user1 ={"bro ",143552,657487};
   user user2 ={"hello ",142543,467656};
   user user3 ={"how are you ?",354255,486858};
   printf("%s%s%s",user1.name,user2.name,user3.name);

    return 0;
}
