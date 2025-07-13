#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {


    printf("The unsigned int value: %u\n", UINT_MAX);
    printf("The unsigned long int value: %lu\n", ULONG_MAX);
    printf("The unsigned long long int value: %llu\n", ULLONG_MAX);
    printf("The unsigned short int value: %hu\n\n", USHRT_MAX);

    printf("The unsigned int value: %u\n", 0);
    printf("The unsigned long int value: %lu\n", 0UL);
    printf("The unsigned long long int value: %llu\n", 0ULL);
    printf("The unsigned short int value: %hu\n", 0);

    return 0;
}
