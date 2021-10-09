#include<stdio.h>
int main()
{
    int A, B, sum = 0;
    printf("Enter two numbers for addition : \n");
    scanf("%d%d", &A, &B);
    sum = A + B;
    printf("Sum is: %d", sum);
    return 0;
}