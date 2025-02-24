#include <stdio.h>
int main(){

    float a,b,c,d,result;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    result=(a+b-c)*d-a/d;
    printf("(%.3f+%.3f-%.3f)*%.3f-%.3f/%.3f:%f",a,b,c,d,a,d,result);

    return 0;
}
