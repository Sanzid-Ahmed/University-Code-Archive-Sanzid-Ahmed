#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w=20,l=15,r=2;

    printf("The area of garden is:%d\n",w*l);
    printf("The total area covered by the garden and the surrounding road is:%d square meters\n",(2*r+w)*(2*r+l));
    return 0;
}
