#include <stdio.h>

int main(){

    float a,b;
    int c;

    printf("Enter two numbers:\n");
    scanf("%f%f",&a,&b);

    printf("Enter a number between 1 to 4:\n");
    scanf("%d",&c);

    if(c==1)
    printf("%.0f+%.0f=%.0f",a,b,a+b);
    else if(c==2)
    printf("%.0f-%.0f=%.0f",a,b,a-b);
    else if(c==3)//sanzid ahmed
    printf("%.0f*%.0f=%.0f",a,b,a*b);
    else if(c==4)
    printf("%.0f/%.0f=%.0f",a,b,a/b);
    else
    printf("Please enter valid numbers");

    return 0;
}
