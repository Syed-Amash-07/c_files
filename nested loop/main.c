#include <stdio.h>


int main()
{   int rows;
    int columns;
    char symbols;

    printf("enter an symbol to be printed:");
    scanf("%c",&symbols);

    printf("enter no of rows:");
    scanf("%d",&rows);

    printf("enter no of columns:");
    scanf("%d",&columns);

    for(int i=1;i<=rows;i++)
    {
      for(int j=1;j<=columns;j++)
      {
        printf("%c",symbols);
      }
      printf("\n");
    }
    return 0;
}
