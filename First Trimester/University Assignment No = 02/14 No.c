#include <stdio.h>

int v = 10;

int main(){

    printf("A. Global: %d\n",v);

    int v = 20;

    printf("B. Local: %d\n",v);

    {extern int v;
    printf("C. Global: %d\n", v);
    }
    return 0;
}
