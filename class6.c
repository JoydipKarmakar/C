#include<stdint.h>
int main() {
    int percentage;
    printf("Enter your percentage: ");
    scanf("%d", &percentage);
    if (percentage >= 85) {
        printf("You got A grade\n");
    } else if (percentage >= 70) {
        printf("You got B grade\n");
    } else if (percentage >= 55) {
        printf("You got C grade\n");
    } else if (percentage >= 40) {
        printf("You got D grade\n");
    } else {
        printf("You got F grade\n");
    }
    return 0;
}