#include <stdio.h>
#include <stdbool.h>
int main()
{

   float gpa=3.14554535678889;    // only 6-7 bits crct remaining not same
   double pi=3.14554535678889;    //more precised value if double used
   bool e =true;
   char f = 121;                   //-128 to 127 number can only be stored in char
   unsigned char u=255;            //0 to 255 can be stored in unsighned char %d and %c
   printf("Your gpa is %0.15f\n",gpa);
   printf("Your value of pi is %0.15lf\n",pi);
   printf("Your boolean answer is %d\n",e);
   printf("your char is %d\n",f);
   printf("your char is %c\n",f);
   printf("your unsigned char is %c\n",u);
   return 0;

}
