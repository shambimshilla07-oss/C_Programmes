#include <stdio.h>

int main() {

float height;
double bankbalance;
long long phone_number;

// Get height and validate 
printf("Enter your height in metres");
if(scanf("%f",&height)!=1 || height<=0 )


printf("invalid height.Must be a positive number.\n");

return 1;

}

