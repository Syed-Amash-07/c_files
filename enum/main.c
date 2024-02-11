#include <stdio.h>
#include <stdlib.h>

enum day{sun,mon,tue,wed=9,thur,fri,sat};

int main()
{

    enum day today=sun;
    if(today == sun || today == sat){
    printf("today is a holiday");}
    else{
    printf("go to college bro");}

    return 0;
}
