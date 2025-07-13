#include <stdio.h>

int main()
{

    float a;
    scanf("%f",&a);

    if(a>=0)
    {
        if(a>0)
        {
            printf("Positive");
        }
        else
        {
            printf("Zero");
        }
    }
    else
    {
        printf("Negative");
    }

    return 0;
}
