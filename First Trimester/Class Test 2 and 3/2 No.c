#include <stdio.h>

int main(){

    int a;
    scanf("%d",&a);

    if(a%2!=0&&a%27==0) printf("ODD\nDivisible by 27\n");
    else if(a%2!=0&&a%27!=0) printf("ODD\nNot divisible by 27\n");
    else printf("NOT ODD\n");

    return 0;
}
