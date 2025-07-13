#include <stdio.h>

int main()
{

    int X,Y;
    scanf("%d%d",&X,&Y);

    switch(X==Y)
    {
    case 1 :
    printf("%d is equal to %d\n",X,Y);
    break;
    }

    switch(X>Y)
    {
    case 1 :
        printf("%d is greater than %d\n",X,Y);
        break;
    }

    switch(X<Y)
    {
    case 1 :
        printf("%d is less than %d\n",X,Y);
        break;
    }
    return 0;
}
