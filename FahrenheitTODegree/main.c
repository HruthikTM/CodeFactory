#include <stdio.h>

int main()
{
    int f;
    printf("Enter Fahrenheit: ");
    scanf("%d",&f);

    int d=(f-32)*5/9;

    printf("Fahrenheit to degree: %d",d);

    return 0;
}
