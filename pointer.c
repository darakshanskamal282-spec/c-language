#include <stdio.h>
int main()
{
    printf("Let's learn pointer \n");
    int a=10;
    int *ptr  =&a;
    printf("%d \n",a);
    printf("%p \n",ptr);
    printf("%d \n",*ptr);
    return 0;
}