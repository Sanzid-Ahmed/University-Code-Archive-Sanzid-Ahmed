#include <stdio.h>

int main()
{

    int R;
    scanf("%d",&R);

    if(R>=90)
    {
        printf("Grade: A");
    }
    else
    {
        if(R<90&&R>=86)
        {
            printf("Grade: A-");
        }
        else
        {
            if(R<86&&R>=82)
            {
                printf("Grade: B+");
            }
            else//sanzid ahmed
            {
                if(R<82&&R>=78)
                {
                    printf("Grade: B");
                }
                else
                {
                    if(R<78&&R>=74)
                    {
                        printf("Grade: B-");
                    }
                    else
                    {
                        if(R<74&&R>=70)
                        {
                            printf("Grade: C+");
                        }
                        else
                        {
                            if(R<70&&R>=66)
                            {
                                printf("Grade: C");
                            }
                            else
                            {
                                if(R<66&&R>=62)
                                {
                                    printf("Grade: C-");
                                }
                                else
                                {
                                    if(R<62&&R>=58)
                                    {
                                        printf("Grade: D+");
                                    }
                                    else
                                    {
                                        if(R<58&&R>=55)
                                        {
                                            printf("Grade: D");
                                        }
                                        else
                                        {
                                            printf("F");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
