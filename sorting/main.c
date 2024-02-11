#include <stdio.h>
#include <stdlib.h>

void sort(char arrays[],int size)
{
    for(int i=0;i<size-1;i++)
    {
       for(int j=0;j<size-i-1;j++)
       {
          if(arrays[j]>arrays[j+1])
          {
               int temp= arrays[j];
               arrays[j]=arrays[j+1];
               arrays[j+1]=temp;
          }
       }
    }
}

void printarray(char arrays[],int size){
  for(int i=0;i<size;i++){
    printf("%c ",arrays[i]);

  }

}

int main()
{   //int arrays[]={7,4,1,5,9,2,3,8,6};
    char arrays[]={'F','E','B','A','C'};
    int size =sizeof(arrays)/sizeof(arrays[0]);

    sort(arrays,size);
    printarray(arrays,size);
    return 0;
}
