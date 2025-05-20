#include <stdio.h>

int main()
{
    int l,b;
    float r,pi=3.14;

    printf("Enter length & breadth of Rectangle and Radius of Circle :");
    scanf("%d%d%f",&l,&b,&r);


    float ac=pi*(r*r);
    float cir=2*pi*r;

    float ar=l*b;
    float p=2*(l+b);

    printf("Area of circle: %f \n",ac);
    printf("Circumference of circle: %f \n",cir);

    printf("Area of rectangle: %f \n",ar);
    printf("Perimeter of rectangle: %f \n",p);

    return 0;

}
