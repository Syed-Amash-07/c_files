#include <stdio.h>
#include <string.h>
#include <strings.h>

int main()
{
    char phones[][10]={"vivo","oppo","samsung"};
    strcpy(phones[2],"iphone");

    for(int i=0;i<sizeof(phones)/sizeof(phones[0]);i++){
    printf("%s\n",phones[i]);}


    return 0;

}
