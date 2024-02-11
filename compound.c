#include <stdio.h>
#include <math.h>

// create a Function to calculate compound interest
double calculateCompoundInterest(double principal, double rate, int time) {
    double amount = principal * pow(1 + rate / 100, time);
    double compoundInterest = amount - principal;
    return compoundInterest;
}

int main() {
    // Define principal amount, rate of interest, and time period
    double principal = 1000; // set the  Principal amount to  $1000
    double rate = 5; // set the  Rate of interest to 5%
    int time = 3; //  Time period to 3 years

    // Calculate compound interest
    double compoundInterest = calculateCompoundInterest(principal, rate, time);

    // Printing out  the result
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}

