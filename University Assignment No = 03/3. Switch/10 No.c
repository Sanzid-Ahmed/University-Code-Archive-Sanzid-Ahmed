#include <stdio.h>

int main(){

    int a,b;
    char c;

    printf("Enter 1st number\n");
    scanf("%d",&a);

    printf("Enter a operator between(+,-,*,/):\n");
    getchar();
    scanf("%c",&c);

    printf("Enter 2nd number\n");
    scanf("%d",&b);

    switch(c)
    {
    case '+' :
    printf("%d%c%d=%d",a,c,b,a+b);
    break;

    case '-' :
    printf("%d%c%d=%d",a,c,b,a-b);
    break;

    case '*' :
    printf("%d%c%d=%d",a,c,b,a*b);
    break;

    case '/' :
        if(b==0){
            printf(" Zero as divisor is not valid!");
        }else{
            printf("%d%c%d=%d",a,c,b,a/b);
        }
    break;

    default :
        printf("you enter wrong things");
    }
    return 0;
}
