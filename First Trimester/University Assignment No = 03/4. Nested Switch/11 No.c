#include <stdio.h>

int main(){

    float R;
    scanf("%f",&R);

    switch(R>=90)
    {
        case 1 :
        printf("Grade: A ");
        break;

        case 0 :
            switch(R<90&&R>=86)
            {
                case 1 :
                printf("Grade: A-");
                break;

                case 0 :
                    switch(R<86&&R>=82)
                    {
                        case 1 :
                        printf("Grade: B+");
                        break;

                        case 0 ://sanzid ahmed
                            switch(R<82&&R>=78)
                            {
                                case 1 :
                                printf("Grade: B");
                                break;

                                case 0 :
                                switch(R<78&&R>=74)
                                {
                                    case 1 :
                                    printf("Grade: B-");
                                    break;

                                    case 0 :
                                        switch(R<74&&R>=70)
                                        {//sanzid ahmed
                                            case 1 :
                                            printf("Grade: C+");
                                            break;

                                            case 0 :
                                                switch(R<70&&R>=66)
                                                {
                                                    case 1 :
                                                    printf("Grade: C");
                                                    break;

                                                    case 0 :
                                                        switch(R<66&&R>=62)
                                                        {
                                                            case 1 :
                                                            printf("Grade: C-");
                                                            break;

                                                            case 0 :
                                                            switch(R<62&&R>=58)
                                                            {
                                                                case 1 :
                                                                printf("Grade: D+");\
                                                                break;

                                                                case 0 :
                                                                    switch(R<58&&R>=55)
                                                                    {
                                                                        case 1 :
                                                                        printf("Grade: D");
                                                                        break;

                                                                        case 0 :
                                                                            switch(R<55)
                                                                            {
                                                                                case 1 :
                                                                                printf("Grade: F");
                                                                                break;

                                                                                case 0 :
                                                                                printf("enter wrong result");
                                                                                break;
                                                                            }
                                                                            break;
                                                                    }
                                                                    break;
                                                            }
                                                            break;
                                                        }
                                                        break;
                                                }
                                                break;
                                        }
                                        break;
                                }
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
