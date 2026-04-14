//position of zero at last
#include<stdio.h>
int main(){
    int a[]={1,2,0,4,3,0,5,0};
    int i,j=0,temp=0;
    for ( i = 0; i < 8; i++)
    {
        if (a[i]!=0)
        {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
           j++; /* code */
        }
        
    }
    for ( j = 0; j < 8; j++)
    {
        printf("%d",a[j]);
    }
    return 0;
}