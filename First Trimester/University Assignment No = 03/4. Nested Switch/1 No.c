#include <stdio.h>

int main(){

    float a;
    scanf("%f",&a);

    switch(a>=0)
    {
        case 1 :

        switch(a>0)
        {//sanzid ahmed
            case 1 : printf("Positive");
            break;//sanzid ahmed

            case 2 : printf("Zero");
            break;
        }

        break;

        case 0 :
            printf("Negative");
            break;
    }

    return 0;
}
