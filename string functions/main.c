#include <stdio.h>
#include <string.h>

int main()
{

    char string1[]="keplo";
    char string2[]="hello";
    int result = strncmp(string1,string2,2);

    if (result==0) {
     printf("both are same!!");
    }
    else{
    printf("both are not same!!");}
    return 0;
}
