#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number =0;
    int sum=0;

    do{
      printf("enter a number greater than 0:");
      scanf("%d",&number);
      sum+=number;
    }while(number >0);


    printf("%d",sum);
    return 0;
}
