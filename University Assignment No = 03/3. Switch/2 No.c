#include <stdio.h>

int main(){

    int a;
    scanf("%d",&a);

    switch(a%2==0)
    {
        case 1 :
            printf("Even");
            break;
        case 0 :
            printf("Odd");
            break;
    }
    return 0;
}
