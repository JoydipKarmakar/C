#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%ld", &n);
    int a = 0, b = 1, nextTerm;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%2ld, ", a);
        nextTerm = a + b;
        a = b;6
        b = nextTerm;
    }
    printf("\n");
    return 0;
}
