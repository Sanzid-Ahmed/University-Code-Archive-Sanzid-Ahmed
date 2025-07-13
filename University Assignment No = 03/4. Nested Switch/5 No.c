#include <stdio.h>

int main(){

    int a;
    scanf("%d",&a);

    switch(a>0)
    {
        case 1 :
        switch((a&(a-1))==0)
        {
            case 1 :
            printf("Yes");
            break;

            case 0 :
            printf("No");
            break;
        }
        break;

        case 0 :
        printf("No");

    }

    return 0;
}
