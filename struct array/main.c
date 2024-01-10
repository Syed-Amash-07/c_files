#include <stdio.h>
#include <string.h>

struct student
{
   char name[25];
   float gpa;

};
int main()
{
   struct student student1 ={"amash ",9.7};
   struct student student2 ={"syed ",9.8};

   struct student students[]={student1,student2};

   for(int i=0;i<sizeof(students)/sizeof(students[0]);i++){

   printf("%-8s\t",students[i].name);
   printf("%.2f\n",students[i].gpa);

   }
    return 0;
}
