#include <stdio.h>

int main(){

    int a,b,c,d;

    scanf("%d%d%d%d",&a,&b,&c,&d);

    float division = (float)(a-c)/d;
    int result=a*b+division+b;

    printf("%d*%d+(%d-%d)/%d+%d:%d\n",a,b,a,c,d,b,result);

    return 0;
}

