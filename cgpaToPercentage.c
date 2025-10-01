#include<stdio.h>
int main() {
    float cgpa, percentage;
    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);
    percentage = (cgpa-.75) * 10;
    printf("Your percentage is: %.2f\n", percentage);
    return 0;
}