#include <stdio.h>

int main()
{
    float km,meters,feet,inches,centimeters;

    printf("Enter distance btw 2 cities: ");
    scanf("%f",&km);

    meters=km*1000;
    centimeters=meters*100;
    inches=meters*39.3701;
    feet=meters*3.28084;


    printf("Distance in meters: %f m \n",meters);
    printf("Distance in feet: %f ft \n",feet);
    printf("Distance in inches:  %f inches \n",inches);
    printf("Distance in centimeters: %f cm \n",centimeters);

    return 0;

}
