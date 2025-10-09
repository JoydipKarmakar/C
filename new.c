#include<stdio.h>
int main()
{
    printf("Hello, World!\n");
    int arr[]={1,2,3,4,5};
    int*ptr=arr;
    if (&ptr==arr)
    printf("same");
    else
    printf("not same");
    return 0;
}