#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("Enter the size of the array \n ");
    scanf("%d",&n);
    ptr=(int*) calloc (n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value %d \n",i);
        scanf("%d",&ptr[i]);
        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("The value at index %d is %d \n",i,ptr[i]);
    }
    printf("enter new size of that you want\n");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value %d \n",i);
        scanf("%d",&ptr[i]);
        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("The value at index %d is %d \n",i,ptr[i]);
    }
    free(ptr);
    
    return 0;
}
