#include <stdio.h>

int main(){

    int a,b,c,d;
    printf("Enter 2 number:\n");
    scanf("%d%d",&a,&b);

    printf("Enter a number between 1 to 4:\n");
    scanf("%d",&c);

    if(c==1){
        printf("%d+%d=%d",a,b,a+b);
    }else{
        if(c==2){
            printf("%d-%d=%d",a,b,a-b);
        }else{
            if(c==3){
                printf("%d*%d=%d",a,b,a*b);
            }else{
                if(c==4){
                    printf("Enter a number between 1 or 2:\n");
                    scanf("%d",&d);

                    if(d==1){
                        printf("%d/%d=%d",a,b,a/b);
                    }else{
                        printf("%d%%%d=%d",a,b,a%b);
                    }
                }else{
                    printf("You enter wrong things");
                }
            }
        }
    }
    return 0;
}
