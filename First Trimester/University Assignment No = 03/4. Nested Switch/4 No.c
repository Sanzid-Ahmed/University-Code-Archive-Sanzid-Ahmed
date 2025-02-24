#include <stdio.h>

int main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    switch((a+b+c)==180)
    {
        case 1 :
            switch(a>0&&a<180)
            {
                case 1 :
                    switch(b>0&&b<180)
                    {
                        case 1 :
                            switch(c>0&&c<180)
                            {//sanzid ahmed
                                case 1 : printf("Yes");
                                break;
                                case 0 : printf("No");
                                break;
                            }
                        break;
                        case 0 : printf("No");
                        break;//sanzid ahmed
                    }
                break;
                case 0 : printf("No");
                break;
            }
        break;
        case 0 : printf("No");
        break;
    }
    return 0;
}
