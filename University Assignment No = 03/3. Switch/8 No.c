#include <stdio.h>

int main(){

    int Y;
    scanf("%d",&Y);

    switch((Y%4==0&&Y%100!=0)||(Y%400==0))
    {
        case 1 : printf("Yes");
        break;

        case 0 : printf("No");
        break;
    }
    return 0;
}
