// C program to estimate if a customer is eligible for a loan


#include <stdio.h>

int main() {
    int age;
    float income;

    // Prompt user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Prompt user for annual income
    printf("Enter your annual income (in Sh)");
    scanf("%f", &income);

    // Check loan eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
