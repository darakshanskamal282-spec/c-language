#include<stdio.h>
#include<strings.h>
struct Employee{
    int id;
    char name[53];
    float marks;
};
struct Employee e1,e2;
int main(){
    e1.id=2;
    strcpy(e1.name,"kamal");
    e1.marks=50.4;
    printf("id=%d \n",e1.id);
    printf("name=%s \n",e1.name);
    printf("marks=%f",e1.marks);

}
