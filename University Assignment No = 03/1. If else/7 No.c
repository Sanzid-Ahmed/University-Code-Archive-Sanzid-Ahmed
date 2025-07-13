#include <stdio.h>

int main(){

    int X,Y;
    scanf("%d%d",&X,&Y);

    if(X==Y)
        printf("%d is equal to %d\n",X,Y);
    else if(X>Y)//sanzid ahmed
         printf("%d is greater than %d\n",X,Y);
    else
        printf("%d is less than %d\n",X,Y);

    return 0;
}
