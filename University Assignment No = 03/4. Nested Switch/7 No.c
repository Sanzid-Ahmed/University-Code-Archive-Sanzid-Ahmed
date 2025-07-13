#include <stdio.h>

int main(){

    int X,Y;
    scanf("%d%d",&X,&Y);

    switch(X>Y)
    {
        case 1 : printf("%d is greater than %d",X,Y);
        break;

        case 0 :
            switch(X<Y)
            {
                case 1 : printf("%d is less than %d",X,Y);
                break;

                case 0 : printf("%d is equal to %d",X,Y);
            }
            break;
    }
    return 0;
}
