#include <stdio.h>

int main(){

    int a,b,c,d;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);

    printf("Enter a number between 1 to 4:\n");
    scanf("%d",&c);

    switch(c)
    {
        case 1 :
        printf("%d+%d=%d",a,b,a+b);
        break;

        case 2 :
        printf("%d-%d=%d",a,b,a-b);
        break;

        case 3 :
        printf("%d*%d=%d",a,b,a*b);
        break;

        case 4 :
        printf("Enter a number between 1 or 2:\n");
        scanf("%d",&d);

        if(d==1){
            printf("%d/%d=%d",a,b,a/b);
        }else{
            printf("%d%%%d=%d",a,b,a%b);
        }
        break;

        default :
        printf("You enter wrong things\n");
    }
    return 0;
}
