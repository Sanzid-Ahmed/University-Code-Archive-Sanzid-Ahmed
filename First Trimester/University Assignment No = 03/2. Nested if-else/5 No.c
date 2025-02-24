#include <stdio.h>

// the equation is n>0 && (n&(n-1))==0; so if we want to create a nested if-else we can do in 1. n>0 and in 2. (n&(n-1))==0
int main(){

    int a;
    scanf("%d",&a);

    if(a>0){
        if((a&(a-1))==0){
            printf("Yes");
        }else{
            printf("No");
        }
    }else{
        printf("No");
    }

    return 0;
}
