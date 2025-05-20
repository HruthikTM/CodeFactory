#include <stdio.h>

int main()
{
    float l=1189,b=841;

    for(int i=0;i<=8;i++){
        printf("A%d: %fmm X %fmm \n",i,l,b);
        float temp=l;
        l=b;
        b=temp/2;

    }

    return 0;
}
