#include <stdio.h>
int main(){

    float a=2.3,b=5.8,c=1.1,d=3.5,result=(a+b-c)*d-a/d;
    printf("(%.3f+%.3f-%.3f)*%.3f-%.3f/%.3f:%f",a,b,c,d,a,d,result);

    return 0;
}
