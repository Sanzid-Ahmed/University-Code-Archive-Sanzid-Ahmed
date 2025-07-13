#include <stdio.h>

int main(){

    int R;
    scanf("%d",&R);

    switch(R>=90)
    {
    case 1 :
    printf("Grade : A\n");
    break;
    }
    switch(R<90&&R>=86)
    {
    case 1 :
    printf("Grade : A-\n");
    break;
    }
    switch(R<86&&R>=82)
    {
    case 1 :
    printf("Grade : B+\n");
    break;
    }
    switch(R<82&&R>=78)
    {
    case 1 :
    printf("Grade : B\n");
    break;
    }
    switch(R<78&&R>=74)
    {
    case 1 :
    printf("Grade : B-\n");
    break;
    }
    switch(R<74&&R>=70)
    {
    case 1 :
    printf("Grade : C+\n");
    break;
    }
    switch(R<70&&R>=66)
    {
    case 1 :
    printf("Grade : C\n");
    break;
    }
    switch(R<66&&R>=62)
    {
    case 1 :
    printf("Grade : C-\n");
    break;
    }
    switch(R<62&&R>=58)
    {
    case 1 :
    printf("Grade : D+\n");
    break;
    }
    switch(R<58&&R>=55)
    {
    case 1 :
    printf("Grade : D\n");
    break;
    }
    switch(R<55)
    {
    case 1 :
    printf("Grade : F\n");
    break;
    }
    return 0;
}
