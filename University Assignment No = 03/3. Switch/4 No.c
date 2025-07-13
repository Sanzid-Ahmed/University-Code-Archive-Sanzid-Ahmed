#include <stdio.h>

int main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    switch((a>0&&a<180)&&(b>0&&b<180)&&(c>0&&c<180)&&(a+b+c)==180)
    {
        case 1 : printf("Yes");
        break;

        case 0 : printf("No");
        break;
    }

    return 0;
}
