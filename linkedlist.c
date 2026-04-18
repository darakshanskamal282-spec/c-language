#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *new,*head,*temp;
int main(){
    int choice;
    do{
        new=(struct node*)malloc(sizeof(struct node));
        printf("enter the values \n");
        scanf("%d",&new->data);
    new->next=NULL;
if(head==NULL){
    head=temp=new;
}  
else{
    temp->next=new;
    temp=temp->next;
} 
printf("If you want to add next node then press 1\n");
scanf("%d",&choice);
    }
while(choice==1);
struct node*p=head;
while(p!=NULL){
    printf("%d \n",p->data);
    p=p->next;
}
 }
