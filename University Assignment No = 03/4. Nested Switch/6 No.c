#include <stdio.h>

int main()
{

    int a;
    scanf("%d",&a);

    switch(a>0 && (a&(a-1))==0)
    {
    case 1 :
        printf("Yes");
        break;
    case 0 :
        switch(a==0)
        {
        case 1 :
            printf("Zero is not a valid input");
            break;

        case 0 :
            switch(a<0)
            {
            case 1 :
                printf("Negative input is not valid");
                break;
            }
            break;
        }
        break;
    }
    return 0;
}
