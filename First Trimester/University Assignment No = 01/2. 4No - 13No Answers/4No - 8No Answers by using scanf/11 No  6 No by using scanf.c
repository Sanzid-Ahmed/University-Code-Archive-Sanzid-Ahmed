#include <stdio.h>

int main(){

    float a,b;
    scanf("%f%f",&a,&b);
    printf("%.3f+%.3f=%f\n",a,b,a+b);
    printf("%.3f-%.3f=%f\n",a,b,a-b);
    printf("%.3f*%.3f=%f\n",a,b,a*b);
    printf("%.3f/%.3f=%f\n",a,b,a/b);

    return 0;
}
