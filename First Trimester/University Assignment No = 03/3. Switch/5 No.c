#include <stdio.h>

int main(){

    int a;
    scanf("%d",&a);

    switch(a>0&&(a&(a-1))==0)
    {
        case 1 :
        printf("Yes");
        break;//sanzid ahmed

        case 0 :
        printf("No");
        break;
    }

    return 0;
}
