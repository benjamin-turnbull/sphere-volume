/* calculates the volume of a sphere */

#include <stdio.h>
#define M_PI 3.14159265358979323846

int main (void) {
    int radius, volume;

    printf("Enter radius of the sphere: \n");
    scanf("%d", &radius);

    volume = 4.0 / 3.0 * M_PI * radius * radius * radius;

    printf("Volume: %d", volume);

    return 0;
}
