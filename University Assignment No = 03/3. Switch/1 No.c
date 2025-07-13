#include <stdio.h>

int main()
{

    float a;
    scanf("%f",&a);

    switch(a>=0)
    {
    case 1 :
        printf("Positive");
        break;
    case 0 :
        printf("Negative");
        break;
    }

    return 0;
}
