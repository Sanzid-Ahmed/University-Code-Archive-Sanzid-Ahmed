#include <stdio.h>

int main() {
    float num;

    scanf("%f",&num);

    printf("(a) Val:%10f\n", num);

    printf("(b) Val:%2f\n", num);

    printf("(c) Val:%.2f\n", num);

    printf("(d) Val:%.0f\n",num);

    printf("(e) Val:%e\n", num);

    return 0;
}
