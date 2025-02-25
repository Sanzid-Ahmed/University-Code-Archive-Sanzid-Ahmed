#include <stdio.h>

int main()
{
    int w=20,l=15,r=2,ga,rga,ar,cost;

    printf("The area of garden is:%d\n",ga=w*l);
    printf("The total area covered by the garden and the surrounding road is:%d square meters\n",rga=(2*r+w)*(2*r+l));
    printf("the area of the road is:%d\n",ar=rga-ga);

    scanf("%d",&cost);

    printf("The total cost of paving the road:%d",ar*cost);

    return 0;
}
