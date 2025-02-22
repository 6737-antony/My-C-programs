//Program to calculate compound interest.
/*
The user is required to input the following:
principle amount.
rate in %
time in years
number of times compounded in a year.
*/
#include <stdio.h>
#include <math.h>
int main() {
    float principle, rate, time, compound_interest, amount;
    int n; 
    printf("Enter the principal amount (Ksh): ");
    scanf("%f", &principle);
    printf("Enter the rate (%%): ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    printf("Number of times compounded yearly: ");
    scanf("%d", &n);
    compound_interest = principle * pow((1 + rate / (100 * n)), (n * time));
    printf("Compound Interest: Ksh %.2f\n", compound_interest);
    return 0;
}