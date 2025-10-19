#include <stdio.h>
#define PI 3.14

int main(void) {
    // The 4/3 fraction.
    float fraction = (4.0f / 3.0f), radius;

    printf("Enter the radius your sphere in meters: ");
    scanf("%f", &radius);

    //Formula calculates the volume of the sphere in cubic meters.
    float volume = (fraction * PI) * (radius * radius * radius);

    printf("Sphere volume: %f", volume);
}