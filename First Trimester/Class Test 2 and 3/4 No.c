#include <stdio.h>

int main(){

    int a;
    scanf("%d",&a);

    if(a%2!=0){
        printf("ODD\n");
        if(a%39==0){
            printf("Divisible by 39\n");
        }else{
            printf("Not divisible by 39\n");
        }
    }else{
        printf("NOT ODD\n");
    }

    return 0;
}
