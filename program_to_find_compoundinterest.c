
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundAmount, compoundInterest;
    int n; // Number of times interest is compounded per year

    // Input
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Calculate compound amount
    compoundAmount = principal * pow((1 + (rate / (n * 100))), n * time);

    // Calculate compound interest
    compoundInterest = compoundAmount - principal;

    // Output
    printf("\nCompound Interest = %.2f\n", compoundInterest);

    return 0;
}
