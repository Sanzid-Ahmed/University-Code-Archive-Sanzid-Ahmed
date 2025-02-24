#include <stdio.h>

int main(){

    int a=21,b=15,c=34,d=6;
    float division= (float)(a-c)/d;
    int result = a*b+division+b;
    printf("%d*%d+(%d-%d)/%d+%d:%d\n",a,b,a,c,d,b,result);

    return 0;
}
