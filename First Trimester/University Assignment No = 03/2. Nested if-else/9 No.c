#include <stdio.h>

int main(){

    char a;
    scanf("%c",&a);

    if(a>='0'&&a<='9'){
        printf("Digit");
    }else{
        if(a>='A'&&a<='Z'){
            printf("Alphabet");
        }else{
            if(a>='a'&&a<='z'){
                printf("Alphabet");
            }else{
                printf("Special");
            }
        }
    }
    return 0;
}
