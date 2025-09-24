




#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, height;
    float volume, surfaceArea;

    // Prompt user input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    // Display results
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface area of the cylinder = %.2f\n", surfaceArea);

    return 0;
 }
 