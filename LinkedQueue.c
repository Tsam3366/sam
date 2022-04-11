#include <stdio.h>
#include <stdlib.h>
struct node{
int element;
struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
struct node* Newnode;
Newnode=malloc(sizeof(struct node*));
if(rear==NULL){
    Newnode->element=x;
    Newnode->next=NULL;
    front=Newnode;
    rear=Newnode;

}
else{
    Newnode->element=x;
    Newnode->next=NULL;
    rear->next=Newnode;
    rear=Newnode;

}
printf("You entered element %d successfully\n\n",x);
}
void dequeue(){
    struct node *temp;

    if(front==NULL){
        printf("Underflow");
                }
    else{
          temp=front;
          printf("Element %d removed successfully",temp->element);
          front=front->next;
    free(temp);
    }
}
int main(){
    printf("Enter how many element you want to enter into the queue:");
    int n;
    scanf("%d",&n);
    int i=0;
    while(i<n){
               int s;
               printf("enter the element:");
               scanf("%d",&s);
               enqueue(s);
               i++;
               }
    dequeue();

return 0;
}
