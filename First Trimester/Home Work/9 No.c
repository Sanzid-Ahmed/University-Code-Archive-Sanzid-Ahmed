#include <stdio.h>

int main(){

    int a;
    scanf("%d",&a);

    if(a==90,a>90){
        printf("Letter Grade:A and Grade Point:4.00");
    }else if (a>=86&&a<90){
        printf("Letter Grade:A- and Grade Point:3.67");
    }else if (a>=82&&a<86){
        printf("Letter Grade:B+ and Grade Point:3.33");
    }else if (a>=78&&a<82){
        printf("Letter Grade:B and Grade Point:3.00");
    }else if (a>=74&&a<78){
        printf("Letter Grade:B- and Grade Point:2.67");
    }else if (a>=70&&a<74){
        printf("Letter Grade:C+ and Grade Point:2.33");
    }else if (a>=66&&a<70){
        printf("Letter Grade:C and Grade Point:2.00");
    }else if (a>=62&&a<66){
        printf("Letter Grade:C- and Grade Point:1.67");
    }else if (a>=58&&a<62){
        printf("Letter Grade:D+ and Grade Point:1.33");
    }else if (a>=55&&a<58){
        printf("Letter Grade:D and Grade Point:1.00");
    } else if (a < 55) {
        printf("Letter Grade:F and Grade Point:0.00");
    } else {
        printf("Invalid input.");
    }

    return 0;

}
