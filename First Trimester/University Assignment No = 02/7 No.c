#include <stdio.h>

int main(){

    int a;
    float b;
    char ch;
    scanf("%d%f",&a,&b);
    getchar();
    scanf("%c",&ch);
    printf("The integer value:%d\n",a);
    printf("The floating point value:%f\n",b);
    printf("The character value:%c\n",ch);

    return 0;
}
