#include <stdio.h>

int main(){
    float u,a,t,s;
    printf("Enter the value of \"u\":");
    scanf("%f",&u);

    printf("Enter the value of \"a\":");
    scanf("%f",&a);

    printf("Enter the value of \"t\":");
    scanf("%f",&t);

    printf("The displacement of a moving body is:%f",s = u * t + (1.0 / 2) * a * t * t); // if I use 1 it doesn't work so need 1.0 to work

    return 0;
}
