#include <stdio.h>

float calculateFare(float distance) {
    float rate = 50.0; 
    return distance * rate;
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Total fare: KSh. %.2f\n", calculateFare(distance));
    return 0;
}