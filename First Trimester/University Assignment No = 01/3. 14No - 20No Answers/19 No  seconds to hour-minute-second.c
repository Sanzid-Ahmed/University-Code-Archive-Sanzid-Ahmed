#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    printf("%d hour %d minute %d second",a/3600,(a%360)/60,(a%360)%60);

    return 0;
}
