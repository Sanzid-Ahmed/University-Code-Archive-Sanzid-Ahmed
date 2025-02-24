#include <stdio.h>

int main(){
    float u,a,t,v;
    printf("Enter the value of \"u\":");
    scanf("%f",&u);

    printf("Enter the value of \"a\":");
    scanf("%f",&a);

    printf("Enter the value of \"t\":");
    scanf("%f",&t);

    printf("The terminal velocity of a moving body is:%f",v=u+a*t);

    return 0;
}
