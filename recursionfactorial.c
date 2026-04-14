#include<stdio.h>
int factorial(int n){
    if(n==0||n==1)
    return 1;
    else
    return (n*factorial(n-1));
}
void main()
{
    int num;
    printf("Enter the number to find the factorial \n");
    scanf("%d",&num);
    printf("The factorial of the number %d=%d",num,factorial(num));
}
