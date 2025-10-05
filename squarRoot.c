#include <stdio.h>
#include <math.h> // Required for sqrt function
int main(){
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    double squareRoot = sqrt(num); // Use double for square root result
    printf("The square root of %d is %.2f\n", num, squareRoot); // Print with 2 decimal places
    return 0;
}