//sanzid ahmed
#include <stdio.h>

int main(){

        int a,b;
    char c;

    scanf("%d%d",&a,&b);

    printf("Enter operators between (-,+,*,/):\n");
    getchar();
    scanf("%c",&c);


    if(c=='+'){
        printf("%d%c%d=%d\n",a,c,b,a+b);
    }else if(c=='-'){
        printf("%d%c%d=%d\n",a,c,b,a-b);
    }else if(c=='*'){
        printf("%d%c%d=%d\n",a,c,b,a*b);
    }else if(c=='/'){//sanzid ahmed
        if(b==0){
            printf("Zero as divisor is not valid!");
        }else{
            printf("%d%c%d=%d\n",a,c,b,a/b);
        }
    }else{
        printf("You enter wrong things");
    }
    return 0;
}
