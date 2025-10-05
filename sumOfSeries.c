#include<stdio.h>
int main(){
    int i=0;
    int sum = 1;
    sum=sum+i;
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        sum = sum + i;
        printf("The sum of first 10 natural numbers is: %d\n", sum);
    }
    
}