#include <stdio.h>

int main(){

    int a,b,c,d;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);

    printf("Enter a number between 1 to 4:\n");
    scanf("%d",&c);

    switch(c==1)
    {
        case 1 :
        printf("%d+%d=%d",a,b,a+b);
        break;

        case 0 :
            switch(c==2)
            {
                case 1 :
                printf("%d-%d=%d",a,b,a-b);
                break;

                case 0 :
                    switch(c==3)
                    {
                        case 1 :
                        printf("%d*%d=%d",a,b,a*b);
                        break;

                        case 0 :
                            switch(c==4)
                            {
                                case 1 :
                                    switch(b==0)
                                    {
                                        case 1 :
                                        printf("Error: Divisor is zero");
                                        break;

                                        case 0 :
                                        printf("Enter a number between 1 or 2:\n");
                                        scanf("%d",&d);

                                        switch(d==1)
                                        {
                                            case 1 :
                                            printf("%d/%d=%d",a,b,a/b);
                                            break;

                                            case 0 :
                                                switch(d==2)
                                                {
                                                case 1 :
                                                printf("%d%%%d=%d",a,b,a%b);
                                                break;

                                                case 0 :
                                                printf("You enter wrong things\n");
                                                }
                                                break;
                                        }
                                        break;
                                    }
                                    break;

                                case 0:
                                printf("You enter wrong things\n");
                                break;
                            }
                            break;
                    }
                    break;
            }
            break;
    }
    return 0;
}
