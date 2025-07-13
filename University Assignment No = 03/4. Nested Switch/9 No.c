#include <stdio.h>

int main(){

    char a;
    scanf("%c",&a);

    switch(a>='0'&&a<='9')
    {
        case 1 :
        printf("Digit");
        break;

        case 0 :
            switch(a>='A'&&a<='Z')
            {
                case 1 :
                printf("Alphabet");
                break;

                case 0 :
                    switch(a>='a'&&a<='z')
                    {
                        case 1 :
                        printf("Alphabet");
                        break;

                        case 0 :
                        printf("Special");
                    }
                    break;
            }
            break;
    }
    return 0;
}
