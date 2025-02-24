#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,x1,x2;
    scanf("%f%f%f",&a,&b,&c);

    x1=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
    x2=(-b+sqrt(pow(b,2)-4*a*c))/2*a;

    printf("x1=%f\nx2=%f",x1,x2);

}
