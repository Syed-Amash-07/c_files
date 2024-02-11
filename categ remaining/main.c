#include <stdio.h>

int main()
{
    short int s=32567;                  //short int is for -32768 to +32767
    unsigned short int d=63498;         //unsigned short int is 0 to 65535
    int k =234442623;                   //-2345678901 to 2345678902
    unsigned j= 439283736;
    long long int l=9152674937743888;
    unsigned long long int i=12364782938774899958U;
    printf("your short int is %d\n",s);
    printf("your unsigned short int is %d\n",d);
    printf("int k=%d\n",k);
    printf("unsigned j = %u\n",j);
    printf("%lld\n",l);
    printf("%llu\n",i);
    return 0;
}
