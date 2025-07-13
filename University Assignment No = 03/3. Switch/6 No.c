#include <stdio.h>

int main(){

    int a;
    scanf("%d",&a);

    switch(a<0)
    {
        case 1 : printf("Negative input is not valid");
        break;
    }
    switch(a==0)
    {
        case 1 : printf("Zero is not a valid input");
        break;
    }
    switch((a&(a-1))==0)
    {
        case 1 : printf("Yes");
        break;

        case 0 : printf("No");
        break;
    }
    return 0;
}
