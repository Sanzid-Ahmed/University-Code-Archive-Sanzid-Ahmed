#include <stdio.h>

int main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if((a+b+c)==180){
        if(a>0&&a<180){
            if(b>0&&b<180){
                if(c>0&&c<180){
                    printf("Yes");
                }else{
                    printf("No");
                }
            }else{
                printf("No");
            }
        }else{
            printf("No");
        }
    }else{
        printf("No");
    }
    return 0;
}
