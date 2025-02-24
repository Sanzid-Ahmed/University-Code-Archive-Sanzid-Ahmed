// determine if it is a power of 2 equation = n>0 && (n&(n-1))==0

#include <stdio.h>

int main(){

    int a;
    scanf("%d",&a);

    if(a>0 && (a&(a-1))==0)
        printf("Yes");
    else//sanzid ahmed
        printf("No");

    return 0;
}
