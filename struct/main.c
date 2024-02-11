#include <stdio.h>
#include <string.h>

struct player{
   char name[25];
   int score;
};

int main()
{
   struct player player1;
   struct player player2;

   strcpy(player1.name,"bro");
   player1.score=4;

   strcpy(player2.name,"brii");
   player2.score=6;

   printf("%s-%d\n",player1.name,player1.score);

   printf("%s-%d\n",player2.name,player2.score);

    return 0;
}
