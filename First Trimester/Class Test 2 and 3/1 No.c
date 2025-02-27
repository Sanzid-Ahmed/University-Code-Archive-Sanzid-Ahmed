#include <stdio.h>

int main(){

    int a;
    scanf("%d",&a);

    if(a==23) printf("January\n");
    else if(a==24) printf("February\n");
    else if(a==25) printf("March\n");
    else if(a==26) printf("April\n");
    else if(a==27) printf("May\n");
    else if(a==28) printf("June\n");
    else if(a==29) printf("July\n");
    else if(a==30) printf("August\n");
    else if(a==31) printf("September\n");
    else if(a==32) printf("October\n");
    else if(a==33) printf("November\n");
    else if(a==34) printf("December\n");
    else printf("Invalid Input");

    return 0;
}
