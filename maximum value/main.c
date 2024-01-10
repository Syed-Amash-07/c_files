#include <stdio.h>

int findmin(int x,int y){
  return(x<y) ? x:y ;
}

int main()
{
    int min = findmin(657,455);
    printf("%d",min);
    return 0;
}
