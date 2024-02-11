#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(int i=1;i<=20;i++){
    if(i==17){
     break;
    }
    else if(i==4){
    continue;}
    printf("%d\n",i);
    }
    return 0;
}
