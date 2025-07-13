#include <stdio.h>

int main(){

    char a;
    scanf("%c",&a); //I use scanf("%d",&a); but it is wrong correct is

    if(a>='0'&&a<='9')
        printf("Digit");
    else if(a>='A'&&a<='Z')
        printf("Alphabet");
    else if(a>='a'&&a<='z')
        printf("Alphabet");
    else//sanzid ahmed
        printf("Special");

    return 0;
}
