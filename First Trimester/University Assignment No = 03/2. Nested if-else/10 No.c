#include <stdio.h>

int main(){

    int a,b;
    char c;

    printf("Enter 1st number:\n");
    scanf("%d",&a);

    printf("Enter operators between (-,+,*,/):\n");
    getchar();
    scanf("%c",&c);

    printf("Enter 2nd number:\n");
    scanf("%d",&b);

    if(c=='+'){
        printf("%d%c%d=%d\n",a,c,b,a+b);
    }else{
        if(c=='-'){
            printf("%d%c%d=%d\n",a,c,b,a-b);
        }else{
            if(c=='*'){
                printf("%d%c%d=%d\n",a,c,b,a*b);
            }else{
                if(a=='/'){
                    if(b==0){
                        printf(" Zero as divisor is not valid!");
                    }else{
                        printf("%d%c%d=%d\n",a,c,b,a/b);
                    }
                }else{
                    printf("You enter wrong things");
                }
            }
        }
    }
    return 0;
}
