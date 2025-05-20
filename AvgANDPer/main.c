#include <stdio.h>

int main()
{
    int m1,m2,m3,m4,m5;
    float average,percentage;
    printf("Enter marks in 5 subjects: ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    average=m1+m2+m3+m4+m5;
    //printf(average);
    percentage=(average/500)*100;

    printf("Average: %f\n",average);
    printf("Percentage: %f\n",percentage);

    return 0;
}
