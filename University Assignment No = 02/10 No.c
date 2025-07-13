#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {


    printf("The long int value: %ld\n",LONG_MAX);
    printf("The long long int value: %lld\n",LLONG_MAX);
    printf("The long double value: %.1LE\n",LDBL_MAX);
    printf("The short int value: %hd\n\n\n",SHRT_MAX);


    printf("The long int value: %ld\n",LONG_MIN);
    printf("The long long int value: %lld\n",LLONG_MIN);
    printf("The long double value: %.1LE\n",LDBL_MIN);
    printf("The short int value: %hd\n",SHRT_MIN);

    return 0;
}
