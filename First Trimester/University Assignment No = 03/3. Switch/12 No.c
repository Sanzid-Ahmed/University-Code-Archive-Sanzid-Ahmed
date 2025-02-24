#include <stdio.h>

int main(){

    float a,b;
    int c;

    printf("Enter two numbers:\n");
    scanf("%f%f",&a,&b);

    printf("Enter a number between 1 to 4:\n");
    scanf("%d",&c);

    switch(c)
    {
        case 1 :
        printf("%.0f+%.0f=%.0f",a,b,a+b);
        break;

        case 2 :
        printf("%.0f-%.0f=%.0f",a,b,a-b);
        break;

        case 3 :
        printf("%.0f*%.0f=%.0f",a,b,a*b);
        break;

        case 4 :
        printf("%.0f/%.0f=%.0f",a,b,a/b);
        break;

        default :
        printf("Please enter valid numbers");
    }
    return 0;
}
