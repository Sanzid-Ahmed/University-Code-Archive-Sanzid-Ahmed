#include <stdio.h>

int main (){
    int a;
    scanf("%d",&a);

    printf("%d note of 500\n%d note of 100\n%d note of 50\n%d note of 10\n%d note of 5\n%d note of 1",a/500,(a%500)/100,((a%500)%100)/50,(((a%500)%100)%50)/10,((((a%500)%100)%50)%10)/5,(((((a%500)%100)%50)%10)%5)/1);

    return 0;
}
