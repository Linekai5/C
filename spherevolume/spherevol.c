#include <stdio.h>
#define PI 3.14

int main(void) {
    float fraction = (4.0f / 3.0f);
    int radius = 10;
    float volume = (fraction * PI) * (radius * radius * radius);
    printf("%f ", volume);
}