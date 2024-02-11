#include <stdio.h>

// create a  Function to calculate simple interest
float calculateSimpleInterest(float principal, float rate, int time) {
    float simpleInterest = (principal * rate * time) / 100;
    return simpleInterest;
}

int main() {
    // Define principal amount, rate of interest, and time period
    float principal = 1000; //set the  Principal amount to  $1000
    float rate = 5.5; //set the  Rate of interest to  5.5%
    int time = 2; // Time period is 2 years

    // Calculate simple interest
    float simpleInterest = calculateSimpleInterest(principal, rate, time);

    // Printing  the result
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}
